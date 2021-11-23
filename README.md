# Genotype Firmware
| Subproject    | Objective                                                                                      |
|---------------|------------------------------------------------------------------------------------------------|
| services | Embedded system submodules that act independently to provide a given set of services to the overall system |
| choreographer | Set of python daemons involved in providing a central management system for the device         |
| messages | Shared files declaring the messaging protocols for CAN bus and UART |

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
