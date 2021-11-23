# Genotype Firmware
| Subproject    | Objective                                                                                      |
|---------------|------------------------------------------------------------------------------------------------|
| hmi           | Embedded Linux system running the GUI program as well as the master co-ordination server       |
| choreographer | Set of python daemons involved in providing a central management system for the device         |
| actors        | Set of microcontroller programs intended for robots and subsystems that are part of the device |

```
.
├── choreographer
│   ├── main.py
│   ├── README.md
│   └── services
├── messages
├── services
│   ├── detector
│   ├── extractor
│   ├── hmi
│   ├── orchestrator
│   └── pcr
└── docs
    ├── assets
    ├── ble_gatt_designs
    └── sample_projects
```
