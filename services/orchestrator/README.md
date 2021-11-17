# Objective
Interprets g-code into motion

# build

## Build all targets
``` sh
pio run
```

## Run tests on the development computer
``` sh
pio test -e native
```

## Run using docker (Advanced)

Note:
- Docker must be installed on the system
- Docker daemon should be already up and running
> - If docker daemon is not active:
> ```sh 
> sudo service docker start
> ```
- If docker is not set up to run without root access, all the docker commands need to be run with `sudo`

``` sh
docker build -t tcr/orchestrator .
docker run tcr/orchestrator
```
