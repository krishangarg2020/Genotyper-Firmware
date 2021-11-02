# Objective 
* To become familiar with PSOC 5LP and PSoC Creator Software.
* To implement different analog and digital circuit using PSoC creator.

# Project Creation Steps.
* At first we need to create a workspace.
* `File--> New--> Projects--> workspace`
* ![workspace](https://user-images.githubusercontent.com/86110190/139683696-f78f302f-e379-4ee1-b461-a2a20943b2ed.png)

* Workspace is ready now we can create projects.
* ` File--> New--> Projects--> Target Device`
* ![target_device](https://user-images.githubusercontent.com/86110190/139683730-cc2144a1-a626-458f-b15c-bcd104a54121.png)
* After selecting correct target device then select empty schematic.
* ![project_template](https://user-images.githubusercontent.com/86110190/139788093-b76946f7-f328-4913-88d4-489adc016978.png)
* Select workspace created above select project path inside the workspace and name the project then finish.
* ![create_project](https://user-images.githubusercontent.com/86110190/139788112-921975b7-d17e-48a1-a0c1-6644ac5e6b24.png)

# Project- OP-AMP
## PSoC Creator Home Page
[OP-AMP Reference](https://www.youtube.com/watch?v=7FBw8-PBIb0)
![PSoC_Creator_home](https://user-images.githubusercontent.com/86110190/139788838-112bf60b-8f7d-4d02-8875-c5277457f569.png)
* First we have to create the schematic in `TopDesign.cysch`
* ![op_amp_topdesign_schema](https://user-images.githubusercontent.com/86110190/139789355-764bec85-cf6f-46ad-a0f7-c377ea5889be.png)
* Componenets can be searched from the search bar inside Component Catalog window on right side of the screen.
* All pins are analogPin.
* OP-AMP will be implemented inside the chip but resistors we have to connect externally therefore these components are found in Off-chip section search
* When all pins are connected and configured then build the program. After builds successfully then we have to configure the pins of the IC.
* Now we have to configure the hadware pins, default pins are already selected but if we want to change them then it can be done by changing the port column and then build again.
* ![pins](https://user-images.githubusercontent.com/86110190/139791618-e1be6a6e-1ed7-4814-bcef-f3207a537021.png)
* Next inside source files open `main.c` and enable opamp_0 function inside the main.
* ![opamp_main_c](https://user-images.githubusercontent.com/86110190/139791972-311bee6f-39e8-49e5-a50e-93881a7ba7cb.png)
* Build the program ,connect board to system then click on program ![program](https://user-images.githubusercontent.com/86110190/139792147-f3dedee6-0a80-4359-843a-6b568c6ad221.png) to flash the progra into the PSoC board.
* ![opam_setup](https://user-images.githubusercontent.com/86110190/139793213-65bddcd2-0374-49e2-90a5-3c0a7ac30048.jpeg)
* External resistors are connected as designed in schematic then Input voltage applied 1V output expected 2V and measured 1.99V

# Project- LED brightness control using pwm according to ADC input
* Create the project inside the workspace.
* 


