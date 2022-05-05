# Objectives
* To calibrate the electronic pipette for orchestrator.
* To standardize the motor movements calculations for pipetting action for certain amount of liquid.
* To perform reverse pipetting with the orchestrator.



# Setup
* To calibrate the electronic pipette we need to fix the vertical axis on aluminum extrusion.
* There should not be any other travelling in x axis therefore X axis is removed from Orchestrator.
* Only vertical axis(Y) will move and electronic pipette(Z axis) 
* All movements should be as slow as possible to minimize the motor vibrations.
* There should not be any air flow.
* To maintain zero air flow we have designed our custom acrylic enclosure which is transparent.
* A temperature humidity sensor is placed inside the acrylic enclosure to monitor the environment.
* ![orchestrator_zaxis_stand2](https://user-images.githubusercontent.com/86110190/166415519-08fe76e7-5551-4820-ac81-f422eccf7eda.jpeg)
* ![z_axis_stand1](https://user-images.githubusercontent.com/86110190/166415534-36c64c72-fd34-4055-b7bd-e40dd1939496.jpeg)
* ![z_axis_stand3](https://user-images.githubusercontent.com/86110190/166415541-9aff5efa-e0a4-4db2-a418-b9eaecc15143.jpeg)
* As usual Orchestrator will be powered up using 12V 2A from DC power supply.
* It will be controlled Using the System through USB serial port.



# Process
## 1st Attempt
* Vertical axis will go upward and stays there for a certain time duration as well it takes liquid into the pipette.
* Vertical axis comes down and a weighing machine is placed under the electronic pipette where the liquid is dispensed into an aluminum foil container.
* We will try out the reverese pipetting with orchestrator to increase the accuracy and precision of Orchestrator.
* To perform reverse pipetting we need to figureout the amount of liquid gets dispensed every time for specific amount of motor movements
