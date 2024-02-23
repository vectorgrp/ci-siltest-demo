# from https://github1.vg.vector.int/pnd/cdevops-concepts/blob/9801d989b5d718c9057d85f0cce7e0cb2eec2a92/know-how/SVN-Checkout/get-repo.ps1

Param(
    [Parameter(Mandatory = $False)] [string]$configFile = "config.json",
    [Parameter(Mandatory = $False)] [string]$SvnUser,
    [Parameter(Mandatory = $False)] [string]$SvnPassword
)

Function SvnCredentialsAsParameterArray {
    Param(
        [array]$inParamms
    )

    $userArray = @()
    $passwordArray = @()

    if ($inParamms.ContainsKey('SvnUser')) {
        $userArray = @('--username', $inParamms.SvnUser)
    }

    if ($inParamms.ContainsKey('SvnPassword')) {
        $passwordArray = @('--password', $inParamms.SvnPassword)
    }

    return $userArray + $passwordArray
}

# Read from config file: svn url and directory
if (Test-Path $configFile) {
    $config = ( Get-Content $configFile ) | ConvertFrom-Json

    $svnRepo = $config.svn_url
    $localRepo = $config.local_dir

} else {
    throw "The config.json file is not found in the current directory"
}

if (-not (Test-Path "$localRepo")) {
    New-Item -ItemType directory -Path "$localRepo"
}

$svnCredentialParams = SvnCredentialsAsParameterArray $PSBoundParameters

# Check if destination is not empty (accounts for hidden folders as well)
if ((Get-ChildItem "$localRepo" -Force | Select-Object -First 1 | Measure-Object).Count -ne 0) {
    $repoRevision = $svnRepo.Split("@")[1]
    $localRevision = svn info "$localRepo" --show-item revision

    # compare revision of local repo with remote repo
    if ($repoRevision -eq $localRevision) {
        # In case there are corrupt/ missing files
        Write-Output "SVN remote and local repositories revisions match, verifying no local files are missing: "
    } else {
        # In case the user specified another revision than the already existing one in the local folder
        Write-Output "Updating to revision: $repoRevision "
    }

    # Make sure local copy matches remote repo
    svn cleanup "$localRepo"
    $svnParams = @("update") + $svnCredentialParams + @('-r', $repoRevision, $localRepo)
    svn @svnParams
} else {
    Write-Output "Checking out repo in '$localRepo':"

    $svnParams = @("checkout") + $svnCredentialParams + @($svnRepo, $localRepo)
    svn @svnParams
}