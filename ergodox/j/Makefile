KEYBOARD=ergodox_ez
CONTROLLER=atmega32u4
LOADER = $(shell which teensy-loader-cli)

LAYOUT=$(notdir $(realpath .))
QMK_TOP=../../../..
HEX=$(QMK_TOP)/$(KEYBOARD)_$(LAYOUT).hex

build: $(HEX)

$(HEX): $(wildcard *.c) $(wildcard *.h) rules.mk
	make -C $(QMK_TOP) $(KEYBOARD):$(LAYOUT)

clean:
	rm -f $(HEX)

flash: $(HEX)
	sudo $(LOADER) --mcu=$(CONTROLLER) -w -v $(HEX)

wait-flash: flash
