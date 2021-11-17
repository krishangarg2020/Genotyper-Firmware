help:
	@echo "This is a convinience Makefile, is likely to only work on Linux, Mac Os and WSL.\nConsult satyam@technoculture.io or write your own makefile if facing issues." 

run:
	pio run -e firmware

test:
	pio test -e native

docker-start:
	sudo service docker start

docker-build:
	sudo docker build -t tcr/orchestrator .

docker-run: docker-build
	sudo docker run tcr/orchestrator

.PHONY: docker-start docker-build docker-run run test
