# Tests

The tests run in this demo check the functionality of the Light Control ECU. They are implemented using CAPL and organized into two test units:

- auto:
    - CheckInstantAutoOnAfterOff: Check automatically turning immediately on when dark and switching to Auto.
    - CheckInstantAutoOffAfterOn: Check automatically turning immediately off when not dark and switching to Auto.
    - CheckStayAutoOffAfterOff: Check automatic stays off when not dark and switching to Auto.
    -  CheckAutoOffAmbLightOn: Check automatically turning off when ambient light turns on.
    - CheckAutoOnAmbLightOff: Check automatically turning on when ambient light turns off.

- basic:
    - CheckTurnOn: Check turning on the light when there is no abient light.
    - CheckTurnOn: Check turning on the light when there is abient light.
    - CheckTurnOff: Check turning off the light when there is no abient light.
    - CheckTurnOff: Check turning off the light when there is abient light.

The test units are described using a set of YAML files. Each test unit is rooted in its `<test-unit-name>.vtestunit.yaml` file. The `.vtestunit.yaml` groups the test implementation (in any of the supported languages, CAPL, C# or Python) and the test tree definition (.vtesttree.yaml). The test tree references the test cases and defines their order of execution.

Using YAML files allows for easy integration with Software Configuration Management tools. Most notably, it allows for direct reading and understanding of changes made to the test implementation when looking at a diff view.

To aid the process of authoring tests in YAML, Vector introduced VS Code Extensions:
- Vector Test Unit Extension: https://marketplace.visualstudio.com/items?itemName=VectorGroup.test-unit
- Vector CAPL Extension: https://marketplace.visualstudio.com/items?itemName=VectorGroup.capl
- Vector Simulation and Test Environment Extension: https://marketplace.visualstudio.com/items?itemName=VectorGroup.simulation-and-test-environment
