PB_COMPILER=protoc
NANOPB_COMPILER=lib/generator/nanopb_generator.py
PROTO_FILE=gcode.proto
DBC_FILE=genotyper_vending_v1
OUT_DIR=./generated

help:
	@echo "usage"
	@echo "  make [target]"
	@echo "objective"
	@echo "  Convience makefile to help with reused commands"
	@echo ""
	@echo "available targets"
	@echo "  pb     compile protocol buffer"
	@echo "  dbc    compile CAN database file"
	@echo "  deps   install dependencies"
	@echo "  all    build all targets"
	@echo "  clean  delete all generated files"

deps:
	pip3 install -r requirements.txt

pb:
	$(NANOPB_COMPILER) --output-dir=$(OUT_DIR)/pbuc $(PROTO_FILE)
	$(PB_COMPILER) -I=./ --python_out=$(OUT_DIR)/pbpy $(PROTO_FILE)

dbc:
	cantools generate_c_source $(DBC_FILE).dbc
	mv $(DBC_FILE).c $(DBC_FILE).h $(OUT_DIR)/can

all: deps pb dbc

clean:
	find ./build -type f -name '*.pb*' -delete
	find ./build -type f -name '*_pb2*' -delete
	find ./build -type f -name "$(DBC_FILE).*" -delete
