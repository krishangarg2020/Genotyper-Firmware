# Objective

* To take ADC readings using DELTA sigma ADC block of PSOC creator.
* To take temperature reading using thermocouple and AD595.

# Equipments Required
* PSOC 5LP board
* USB-A male to USB-A female cable or (TypeC to USB-A female)
* USB A to micro-USB cable
* AD595C
* Jumper wires
* Thermocouple type-K

# Wiring
| AD595C  | PSOC5LP  |
|  -- | --  |
|  1,4,7,13 | GND  |
|  14 |  Termocouple (+) |
|  11 | VDD  |
| 8,9  | P2.3  |
|  2,3,5,6,10,12 | NC(Keep floating)  |
* Connect LED at P2.1 with current limiting resistor to GND.
* Thermocouple red wire to pin 14 of ad595.
* yellow wire to pin 1 of ad595.

# Setup
![setup_adc_delta](https://user-images.githubusercontent.com/86110190/141070451-359210fd-73c9-49d2-8bd4-8a937637269b.jpeg)


# Project Creation

* For Project creation follow this [documentation](https://github.com/TechnocultureResearch/Genotyper-Firmware/tree/dev/PSOC).
* After project creation , in TopDesign.cysh , add delta sigma ADC block, one analog pin, one usb UART block, one LED pin for future purpose.
* ![Delta_sigma_adc_schema](https://user-images.githubusercontent.com/86110190/141063367-59cc3af3-f2c8-4161-98a4-3e8a56c072b9.png) 
* ![DElta_sigma_adc_configure](https://user-images.githubusercontent.com/86110190/141063868-996ed4ef-5513-49bf-9572-5cf23e29989b.png) 
* 16 bit resolution is used as this resolution gives sampling rate of 48ksps.
* ![Delta_sigma_pin_configure](https://user-images.githubusercontent.com/86110190/141063410-825d698b-089e-4453-8782-34cc5087a22d.png)
* LED pin is configured at P2.1 and thermocouple input pin configured at P2.3
* Build the project before starting with main.c
* ![DElta_sigma_main](https://user-images.githubusercontent.com/86110190/141070815-e525824f-5340-4bf7-a8f0-961c2d5faa1a.png)

* Upload the project to the PSOC 5LP board using programming side.

# Monitoring Serial Data
* Connect micro usb side for monitoring serial data using Putty.
* Temperature data is validated using TMP100 connected to arduino.
* ![temperature_reading_validation](https://user-images.githubusercontent.com/86110190/141063554-adc33b3a-9bc1-4dea-ad06-cb91c6e71533.png)






