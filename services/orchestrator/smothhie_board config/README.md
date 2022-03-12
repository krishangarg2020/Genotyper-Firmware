# Objective 

* To configure and test the smoothie board as per the orchestrator.
* To test two axes movement with smoothie board
* To calibrate the smoothie board configurations properly.

## Steps to prepare the smoothie board for test run

* SD card mounted on the smoothie board comes with config file and firmware already flashed. It can also work fine without any modification.
* In some cases it may not work.
* It is recommended to upgrade the firmware in that case.
* To upgrade the firmware follow the below links.
* Download the configuration file from [here](https://smoothieware.org/configuring-smoothie) .
* Download the firmware from [here](https://github.com/Smoothieware/Smoothieware/blob/edge/FirmwareBin/firmware.bin) .
* **File name must not be altered.**
* Alternately config.text as well firmware file is added in the folder here.
* Connect the board using USB cable.
* Paste the config.txt and firmware.bin file into the sd card then eject(not physically from the board, only from the menu in the system).
* RESET the board , then flashing process begins.
* Four onboard leds will start counting up as the firmware gets flashed.
* If everything works fine then led 1 & 4 will be ON and led 2,3 will blink together.
* Also the firmware.bin will become FIRMWARE.CUR file.
* If there is a problem then format the sd card then try again the above process.



# Software

* Pronterface [download](https://github.com/kliment/Printrun/releases/download/printrun-2.0.0rc8/pronterface-windows-x64_3.8-2.0.0rc8.zip)
* 

 