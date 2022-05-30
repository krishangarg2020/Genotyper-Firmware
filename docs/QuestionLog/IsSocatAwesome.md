# Socat ([man file](https://linux.die.net/man/1/socat))

- **Scenario**: An app (Qt app, or Some command line util) talks to an embedded system over UART. The communication maybe a plain ASCII over Serial or a more efficient Serialization Protocol (Protobuf) over Serial.

- **Problem**: How do we develop an app like this without harware present? How could we run integration tests wihtout the need of the hardware (**Note**: This would be great for CI/CD).

- **The big question**: Can socat save us?

## These guys think Yay
- [Virtual Serial Ports Using Socat](https://jamesthom.as/2021/01/virtual-serial-ports-using-socat/)
- [TTY-Redirector/Pseudo-TTYs under Linux](https://www.wut.de/e-58www-29-apus-000.php)

## These guys have doubts


### Socat is cool though
- [Serialport-Server: Expose a local serial port on a network](https://hub.docker.com/r/akshmakov/serialport-server)

# Counter Voice: Forget About Socat - Go Zmq
- [Serial2ZMQ](https://github.com/wookiesh/serial2zmq)
- Exposing a serial port to a ZMQ bus would allow it to participate in more complex communication topologies beyond the one-to -one communication supported by Serial
    > 🤔 **Wonder**:
    > - Serial exposed to ZMQ could allow for separate logging, caching and queing of incomming messages
    > - Serial messages need not be ephimeral
    > - Serial messages may be used by multiple processes simultaneously. This may be useful for event triggered functionalities, if any.
