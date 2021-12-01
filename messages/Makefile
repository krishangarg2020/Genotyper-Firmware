PB_COMPILER=protoc
NANOPB_COMPILER=lib/generator/nanopb_generator.py

PROTO_FILE=gcode.proto
DBC_FILE=genotyper_vending_v1
OUT_DIR=./generated

pbuc_FROM=./generated/pbuc/*
pbuc_TO=../services/orchestrator/lib/orchestrator_model/src

help:
	@echo "usage"
	@echo "  make [target]"
	@echo "objective"
	@echo "  Convience makefile to help with reused commands"
	@echo ""
	@echo "available targets"
	@echo "  pb     compile protocol buffer"
	@echo "  dbc    compile CAN database file"
	@echo "  push   Push generated files to directories where they are required"
	@echo "  deps   install dependencies"
	@echo "  all    build all targets"
	@echo "  clean  delete all generated files"
	@echo ""
	@echo "Requires rsync, pip3"

pb:
	$(NANOPB_COMPILER) --output-dir=$(OUT_DIR)/pbuc $(PROTO_FILE)
	$(PB_COMPILER) -I=./ --python_out=$(OUT_DIR)/pbpy $(PROTO_FILE)

dbc:
	cantools generate_c_source $(DBC_FILE).dbc
	mv $(DBC_FILE).c $(DBC_FILE).h $(OUT_DIR)/can

push:
	rsync $(pbuc_FROM) $(pbuc_TO)

deps:
	pip3 install -r requirements.txt

all: deps pb dbc push

clean:
	find ./build -type f -name '*.pb*' -delete
	find ./build -type f -name '*_pb2*' -delete
	find ./build -type f -name "$(DBC_FILE).*" -delete
