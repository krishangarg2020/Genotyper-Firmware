# From Opentron code :
- depth: 17.4 mm
- diameter: 22.5 mm
- total-liquid-volume: 16800 ul

# For standard 6 well plate :
- depth: 17.0 mm
- diameter: 35.0 mm
- total-liquid-volume: 16355 ul [FULL]

```json
"6-well-plate": {
               "origin-offset": {                          ## UNKNOWN PARAMETER
                    "x": 23.16,
                    "y": 24.76
               },
               "locations": {
                    "A1": {
                         "x": 0,
                         "y": 0,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "B1": {
                         "x": 39.12,
                         "y": 0,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "A2": {
                         "x": 0,
                         "y": 39.12,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "B2": {
                         "x": 39.12,
                         "y": 39.12,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "A3": {
                         "x": 0,
                         "y": 78.24,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    },
                    "B3": {
                         "x": 39.12,
                         "y": 78.24,
                         "z": 0,
                         "depth": 17.4,
                         "diameter": 22.5,
                         "total-liquid-volume": 16800
                    }
               }
          }
```



###### Image 1 -   Standard 6 well plate

![STANDARD_6_WELL_PLATE](D:\pritam\Genotyper-Firmware\docs\Orchestrator\ContainerCoordinateSystem\Standard_module_compare_config_files\6_well_plate\STANDARD_6_WELL_PLATE.jpeg)



###### Image 2 -   Standard 6 well plate CAD

![6_well_plate_cad_image](D:\pritam\Genotyper-Firmware\docs\Orchestrator\ContainerCoordinateSystem\Standard_module_compare_config_files\6_well_plate\6_well_plate_cad_image.JPG)



###### CAD File-  [6_well_plate_cad.dwg](6_well_plate_cad.dwg) 

###### Table-1 : Standard 6 well plate product description

|          | Description | URL  |
| -------- | ----------- | ---- |
| Material |             |      |
| Supplier |             |      |





###### Table-2 : Measurement techniques and specification of standard 6 well plate

| Standard 6 well plate | Measurement technique                                        | Value    |
| --------------------- | ------------------------------------------------------------ | -------- |
| depth                 | Use height gauge/Vernier caliper, taking reading from top surface to the bottom surface of one well | 17.0mm   |
| diameter              | Use Vernier caliper to measure the diameter of one well      | 35.0mm   |
| total liquid volume   | Simply calculate after determination of the height and diameter | 16355 ul |



###### Table-3 : 6 Well plate comparison table

|                         | FROM OPENTRON CODE 6 WELL PLATE | STANDARD 6 WELL PLATE | RESULT    |
| ----------------------- | ------------------------------- | --------------------- | --------- |
| **Depth**               | 17.4 mm                         | 17.0 mm               | Not Match |
| **Diameter**            | 22.5 mm                         | 35.0 mm               | Not Match |
| **Total Liquid Volume** | 16800 ul                        | 16355 ul              | Not Match |
| **Geometric position**  | -                               | -                     | Match     |
