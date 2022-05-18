# From Opentron code :

- depth: 163 mm
- diameter: 25 mm
- total-liquid-volume: 75000 ul

# For standard T-75 flask :

- depth:  150 mm
- diameter: 25 mm
- total-liquid-volume: 75000 ul

```json T-25_flask code
"T75-flask": {
               "origin-offset": {
                    "x": 42.75,
                    "y": 63.875
               },
               "locations": {
                    "A1": {
                         "x": 0,
                         "y": 0,
                         "z": 0,
                         "depth": 163,
                         "diameter": 25,
                         "total-liquid-volume": 75000
                    }
               }
          }
```



###### Image - 1 standard T-75 flask

![T75 FLASK](D:\pritam\Genotyper-Firmware\docs\Orchestrator\ContainerCoordinateSystem\Standard_module_compare_config_files\T75_flask\T75 FLASK.jpeg)



###### Image - 2 standard T-75 flask cad image

![T75_cad_image](D:\pritam\Genotyper-Firmware\docs\Orchestrator\ContainerCoordinateSystem\Standard_module_compare_config_files\T75_flask\T75_cad_image.JPG)

###### CAD of standard T-75 flask

 [T75_flask_cad.dwg](T75_flask_cad.dwg) 



###### Table-1 : Standard T-75 flask product description

|          | Description | URL  |
| -------- | ----------- | ---- |
| Material |             |      |
| Supplier |             |      |





###### Table-2 : Measurement techniques and specification of standard T-75 flask

| Standard 6 well plate | Measurement technique                                        | Value    |
| --------------------- | ------------------------------------------------------------ | -------- |
| depth                 | Use Vernier caliper, taking reading from top opening cap of the T-75 flask through the bottom surface | 150 mm   |
| diameter              | Use Vernier caliper to measure the diameter of the top opening cap | 25 mm    |
| total liquid volume   | Simply calculate after determination of the height and diameter | 75000 ul |



###### Table-3 : T-75 flask comparison table

|                         | FROM OPENTRON CODE T-75 FLASK | STANDARD T-75 FLASK | RESULT    |
| ----------------------- | ----------------------------- | ------------------- | --------- |
| **Depth**               | 163 mm                        | 150 mm              | Not Match |
| **Diameter**            | 25 mm                         | 25 mm               | Match     |
| **Total Liquid Volume** | 75000 ul                      | 75000 ul            | Match     |
| **Geometric position**  | -                             | -                   | -         |
