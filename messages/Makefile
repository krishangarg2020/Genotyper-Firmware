help:
	@echo "usage: make [target]"
	@echo "objective: Convience makefile to help with reused commands"
	@echo ""
	@echo "available targets"
	@echo "  deps:  install dependencies"
	@echo "  pb:    compile protocol buffer"
	@echo "  clean: delete all generated files"

deps:
	pip3 install -r requirements.txt

pb:
	protoc -I=./ --cpp_out=./build gcode.proto

clean:
	rm build/*
