# Objective 
* To become familiar with PSOC 5LP and PSoC Creator Software.
* To implement different analog and digital circuit using PSoC creator.

# PSoC 5LP Board
* 32-bit Arm Cortex-M3 CPU, 32 interrupt inputs
* 24-channel direct memory access (DMA) controller with data transfer between both peripherals and memory
* 24-bit fixed-point digital filter processor (DFB)
* 20+ Universal Building Blocks and Precise Analog Peripherals
* Up to 62 CapSense® sensors with SmartSense™ Auto-tuning
* Multiplexed AFE with programmable Opamps, 12-bit SAR ADC and 8-bit DAC
* 736 segments LCD drive for custom displays
* Packages: 68-pin QFN, 99-pin WLCSP, 100-pin TQFP
* ![psoc5_pinout](https://user-images.githubusercontent.com/86110190/139798494-665ae84f-884e-4edb-8e3d-b20984707946.png)
* 4 GPIO Ports P0[0-7], P1[0-7],P2[0-7], P3[0-7]


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
## Objective
* To implement OP-AMP functionality on PSoC5LP without using the physical opamp.
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
## Objective
* To become familiar with use of ADC input and PWM output using the PSoC 5LP.
## Steps
* Create the project inside the workspace.
* Add componenets to `TopDesign.cysch` from componenets catalog.
* Block 1 -PWM Block 2- ADC_SAR
* ![adc_pwm_schema](https://user-images.githubusercontent.com/86110190/139797825-bd704d1b-bb6b-4539-8e6b-0aabda074c2e.png)

* Add clock to clock input and an analog pin for led to pwm pin of the PWM block.
* Configure the pwm block as Resolution 8bit UDB, PWM Mode ONE-OUTPUT
* ![configure_pwm](https://user-images.githubusercontent.com/86110190/139794744-36903bf0-dc53-4971-87be-d34320df77db.png)
* ![configure_adc](https://user-images.githubusercontent.com/86110190/139795632-cce06103-5290-4d08-956b-84b28882bed9.png)
* Configure the ADC block as shown above, connect an analog pin as POT.
* ![adc_pwm_pin](https://user-images.githubusercontent.com/86110190/139796044-21e8f89a-0b4b-4e75-bf96-b2a36da30ccb.png)
* Configure the hardware then build.
* ![adc_pwm_main](https://user-images.githubusercontent.com/86110190/139796258-1e11f916-7018-4482-a22f-2c3b51b2d339.png)
* LED connected between P2.1 and ground.
* POT connected between P2.3 and ground.
* ![adc_pwm_test](https://user-images.githubusercontent.com/86110190/139797113-715cb584-0d3e-4404-9ece-c9712b7b5168.jpeg)
* Brightness of LED is being controlled with respect to potentiometer.

# Project - Transimpedance amplifier
## Objective
* To implement transimpedance amplifier with PSOC5LP without using any physical analog circuit.

## Steps



