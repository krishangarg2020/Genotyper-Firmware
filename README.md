# Firmware for Genotyper

>❗This repository uses various development dependencies for managing code formatting (`clang-format`, `uncrustify`), commit messages(`husky`, `commitlint`, and `bump`). 
> These should be set up properly. Refer to Getting Started page on the project wiki. 

---

To setup the zephyr environment with the west tool and for more details, refer to [Getting Started Guide](https://github.com/TechnocultureResearch/Genotyper-Firmware/wiki/Getting-started).

## Build an application

To build an application (For example, the TMP100 sensor) using the west tool, navigate to the workspace and run

### Build

``` bash
west build -p auto -b geno_nrf52811 samples/sensor/tmp100
```

- `-p` ensures a pristine (clean) build.
- `-b` is used to specify the board name.
 
### Flash
After the build process is completed, run

``` bash
west flash --erase
```

This will flash the executable file generated onto the flash memory of the target board.

### Console
The `minicom` serial monitor is needed to view the sensor output on the console.

Run

``` bash
minicom -D /dev/ttyACM* -b 115200
```

- `-D` specifies the device connected to the port.
- `-b` specifies the baudrate of transmission overriding the value mentioned in the minicom's configuration file.

---

> ⚠️ Note:
>
> Find the custom board files in the path `./boards/arm/` and copy it to `../zephyr/boards/arm/` along with the definitions of all other boards that zephyr provides.
> Failing to do so, we get an error saying that the board definition is not found in the path where it looks for the boards which is `../zephyr/boards/arm/`.
