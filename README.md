# Genotype Firmware
| Subproject    | Objective                                                                                      |
|---------------|------------------------------------------------------------------------------------------------|
| hmi           | Embedded Linux system running the GUI program as well as the master co-ordination server       |
| choreographer | Set of python daemons involved in providing a central management system for the device         |
| actors        | Set of microcontroller programs intended for robots and subsystems that are part of the device |

```
├── actors
│   ├── detector
│   ├── extractor
│   ├── mpcr
│   ├── orchestrator
├── choreographer
├── hmi
└── samples
    ├── FlutterKiosk-POC
    ├── psoc
    └── zephyr
```
