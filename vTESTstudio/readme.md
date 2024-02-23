# Tests

There are two test units which contain the following tests.

- auto:
    - CheckAutoInstantlyTurnsOffAfterOff -> Check automatically turning immediately on when dark and switching to Auto.
    - CheckAutoInstantlyTurnsOnAfterOn -> Check automatically turning immediately on when bright and switching to Auto.
    - CheckStayAutoOffAfterOff -> Check automatic stays off when not dark and switching to Auto.
    - CheckAutoOffAmbLightOn -> Check automatically turning off when ambient light turns on.
    - CheckAutoOnAmbLightOff -> Check automatically turning on when ambient light turns off.

- basic:
    - CheckTurnOn -> Check turning on the light.
    - CheckTurnOff -> Check turning off the light.

The LightControl.vtsoproj file is created using **vTestStudio**. In order to edit tests or create more test units, this file must be opened in vTest Studio and test units can be added/ edited throguh CAPL, C# files,  State Diagram and more.</br>