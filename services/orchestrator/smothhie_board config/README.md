# Objective 

* To configure and test the smoothie board as per the orchestrator.
* To test two axes movement with smoothie board
* To calibrate the smoothie board configurations properly.

## Steps to prepare the smoothie board for test run

* Connect the board using USB cable.
* SD card mounted on the smoothie board comes with config file and firmware already flashed. It can also work fine without any modification.
* In some cases it may not work.
* In that case it is recommended to upgrade the firmware.
* To upgrade the firmware follow the below links.
* Download the configuration file from [here](https://smoothieware.org/configuring-smoothie) .
* Download the firmware from [here](https://github.com/Smoothieware/Smoothieware/blob/edge/FirmwareBin/firmware.bin) .
* **File name must not be altered.**
* Alternately config.text as well firmware file is added in the folder here.
* Paste the config.txt and firmware.bin file into the sd card then eject(not physically from the board, only from the menu in the system).
* RESET the board , then flashing process begins.
* Four onboard leds will start counting up as the firmware gets flashed.
* If everything works fine then led 1 & 4 will be ON and led 2,3 will blink together.
* Also the firmware.bin will become FIRMWARE.CUR file.
* If there is a problem then format the sd card then try again the above process.
* For better understanding the configuration parameters check thid [link](https://smoothieware.org/configuration-options)

## Wiring Up the Motors with board
* check the coils of stepper motor.
* There are 2 coils of which 4 wires we will get


# Software

* Pronterface [download](https://github.com/kliment/Printrun/releases/download/printrun-2.0.0rc8/pronterface-windows-x64_3.8-2.0.0rc8.zip)
## Troubleshooting steps
* Troubleshooting steps can be found [here](https://smoothieware.org/troubleshooting)
* LED blinking patterns are well described here to get better understanding of the ststus of the board.


## Board Pinouts

 ![smoothieboard_pinout](https://user-images.githubusercontent.com/86110190/158008764-7accd6e5-6192-4624-8ebb-2cff66955d03.png)
 ![pin_capabilities](https://user-images.githubusercontent.com/86110190/158008773-bb2deb76-e5c1-4c3e-be9c-d15b97a0d687.png)


## Calibration
steps_per_mm = (full steps per rotation * microstep per step)/mm per rotation


in general full steps per rotation =200, microsteps per rotation for smoothieboard= 32


which becomes (200 * 32) / mm per rotation.


mm per rotation is the distance traveled in any particular axis when stepper rotates one revolution and can be calculated by rotating the stepper one rotation manually or using the pronterface.

