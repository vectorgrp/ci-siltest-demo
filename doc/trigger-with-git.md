# Trigger-with-Git

## Clone-the-repo

If you want to try the CI-Pipeline, first you have to clone the repo and create your own branch.
(For this you need the git cmdline tool <https://git-scm.com/downloads>)

1. Install git cmd tool.

    Set the proxy if needed. For example if you are behind a corporate proxy.

```powershell
git config --global http.proxy [http://proxyUsername:proxyPassword@proxy.server.com:port]
```

2. Create a personal access token.

```text
Click on your user-icon on the top right. ->
Select "Preferences". ->
Select "Access Tokens" on the left side. ->
Follow the instructions on the side to create a token and save it in a save space (e.g. KeePass)
```

3. Clone the repo.
  
    If you are asked for a username and password, the password is your personal access token.

```powershell
git clone https://gitlab.citc-dev.de/vector-employees/ci-lightctrl-demo.git
```

4. Change into the folder.

```powershell
cd .\ci-lightctrl-demo\
```

5. Create your own branch.

```powershell
git branch [BRANCH_NAME]
git checkout [BRANCH_NAME]
```

## Push-and-trigger

1. Make changes and commit the changes

    E.g.:
    Uncomment line 59 (“//rtb_LightIntensity_LightIntensi = 0;”) in the source code "/ECU/Appl/Simulink/LightCtrl_Model_autosar_rtw/LightCtrl_SWC.c" to cause test fails.  
    Info: Some tests will set the light intensity value and expect a changed head light result. Because the light intensity is now statically set to value zero, some tests will fail.

```powershell
git add [PATH_TO_CHANGED_FILES]
git commit 
git push --set-upstream origin [BRANCH_NAME]
```

2. After the first push, you can use:

```powershell
git add [PATH_TO_CHANGED_FILES]
git commit 
git push
```

3. Follow the instructions in the next section, to observe the pipeline.

## View-the-pipeline

To see the pipeline working and the CANoe4SW_SE Test-Report:

```text
 Click "CI/CD" on the left side. -> 
 Choose the most recent run by clicking in the status icon "passed" or "failed". ->
 Click on "Tests" on center of the screen. ->
 Click on the listed Job. ->
 View the test results.

```

For an image based guide, [click here](/view-pipeline-and-tests.md)
