# Objective

* To take ADC readings using DELTA sigma ADC block of PSOC creator.
* To take temperature reading using thermocouple and AD595.

# Project Creation

* For Project creation follow this [documentation](https://github.com/TechnocultureResearch/Genotyper-Firmware/tree/dev/PSOC).
* After project creation , in TopDesign.cysh , add delta sigma ADC block, one analog pin, one usb UART block, one LED pin for future purpose.
* ![Delta_sigma_adc_schema](https://user-images.githubusercontent.com/86110190/141063367-59cc3af3-f2c8-4161-98a4-3e8a56c072b9.png) 
* ![DElta_sigma_adc_configure](https://user-images.githubusercontent.com/86110190/141063868-996ed4ef-5513-49bf-9572-5cf23e29989b.png) 
* 16 bit resolution is used as this resolution gives sampling rate of 48ksps.
* ![Delta_sigma_pin_configure](https://user-images.githubusercontent.com/86110190/141063410-825d698b-089e-4453-8782-34cc5087a22d.png)
* LED pin is configured at P2.1 and thermocouple input pin configured at P2.3
* Build the project before starting with main.c
* ![DElta_sigma_main](https://user-images.githubusercontent.com/86110190/141063421-75fc4f2a-bd1c-4def-82eb-b80213bd11c8.png)
* Upload the project to the PSOC 5LP board using programming side.

# Monitoring Serial Data
* Connect micro usb side for monitoring serial data using Putty.
* ![temperature_reading_validation](https://user-images.githubusercontent.com/86110190/141063554-adc33b3a-9bc1-4dea-ad06-cb91c6e71533.png)






