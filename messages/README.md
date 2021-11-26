# Objective 
1. **Unified declaration of messages formats** used in the over system
2. **Code generation** in order to generate code to integrate the message formats with embedded C/C++ code with other embedded Linux code written in Python/Go/Dart/Js/etc.

## Message Protocols for the Genotyper
1. CAN Bus protocol -> `.dbc` file
2. Protobuf protocol -> `.proto` file

### Main system communication bus over CAN
This protocol file describes all the messages communicated over the CAN bus in the Genotyper system comprising of various, heterogenous compute systems.

### G-code over UART 
This protocol is for efficient transmission of g-code over a UART serial communication. Efficient communication is achieved using Serialization using `Protobuf/Nanopb`.


# Tech stack
## Protobuf/nanopb
- [Nanopb: Getting Started](https://jpa.kapsi.fi/nanopb/docs/#getting-started)

> Sample program: [/examples/simple](https://github.com/nanopb/nanopb/tree/master/examples/simple)

![](https://jpa.kapsi.fi/nanopb/docs/generator_flow.svg)
