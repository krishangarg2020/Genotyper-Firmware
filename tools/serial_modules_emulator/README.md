# Serial Modules Emulator

Here's the barebones of the plan:
- Use `pty` to produce pseudoterminals
- Configure `pty` with configuration data (manufacturer, product, serial no.)
- Allow a plugin architecture so that a configurable set of emulators (dependent on the machine configuration file) can be loaded
- Allow plugins to specify their properties, use their serial port related properties
- provide each plugin emulator, a handle to a pseudoterminal port (or maybe a Serial object)
    > The idea is that a plugin emulator can produce data, receive data, acknowledge received commands etc.

> **Note**: Does not aim to support Windows OS
