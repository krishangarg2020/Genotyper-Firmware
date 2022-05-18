# From Opentron code :

- depth: 99 mm
- diameter: 18 mm
- total-liquid-volume: 25000 ul

# For standard T-25 flask :

- depth:  93.8 mm
- diameter: 16.0 mm
- total-liquid-volume: 25000 ul

```json T-25_flask code
"T25-flask": {
               "origin-offset": {
                    "x": 42.75,
                    "y": 63.875
               },
               "locations": {
                    "A1": {
                         "x": 0,
                         "y": 0,
                         "z": 0,
                         "depth": 99,
                         "diameter": 18,
                         "total-liquid-volume": 25000
                    }
               }
          }
```



###### Image - 1 standard T-25 flask



![T25 FLASK](D:\pritam\Genotyper-Firmware\docs\Orchestrator\ContainerCoordinateSystem\Standard_module_compare_config_files\T25_flask\T25 FLASK.jpeg)

###### Image - 2 standard T-25 flask cad image

![T25_cad_image](D:\pritam\Genotyper-Firmware\docs\Orchestrator\ContainerCoordinateSystem\Standard_module_compare_config_files\T25_flask\T25_cad_image.JPG)

###### Standard T-25 flask cad file

 [t25_cad.dwg](t25_cad.dwg) 



###### Table-1 : Standard T-25 flask product description

|          | Description | URL  |
| -------- | ----------- | ---- |
| Material |             |      |
| Supplier |             |      |





###### Table-2 : Measurement techniques and specification of standard T-25 flask

| Standard T-25 well plate | Measurement technique                                        | Value    |
| ------------------------ | ------------------------------------------------------------ | -------- |
| depth                    | Use Vernier caliper, taking reading from top opening cap to the bottom surface of the T-25 flask | 93.8 mm  |
| diameter                 | Use Vernier caliper to measure the top opening cap of the T-25 flask | 16.0 mm  |
| total liquid volume      | Simply calculate after determination of the height and diameter | 25000 ul |



###### Table-3 : T-25 flask comparison table

|                         | FROM OPENTRON CODE T-25 FLASK | STANDARD T-25 FLASK | RESULT    |
| ----------------------- | ----------------------------- | ------------------- | --------- |
| **Depth**               | 99 mm                         | 93.8 mm             | Not Match |
| **Diameter**            | 18 mm                         | 16 mm               | Not Match |
| **Total Liquid Volume** | 25000 ul                      | 25000 ul            | Match     |
| **Geometric position**  | -                             | -                   | -         |
