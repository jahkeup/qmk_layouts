KEYBOARD=ergodox_ez
CONTROLLER=atmega32u4

LAYOUT=$(notdir $(realpath .))
QMK_TOP=../../../..
HEX=$(QMK_TOP)/$(KEYBOARD)_$(LAYOUT).hex

build: $(HEX)

$(HEX): $(wildcard *.c)
	make -C $(QMK_TOP) $(KEYBOARD):$(LAYOUT)

clean:
	rm -f $(HEX)

flash: $(HEX)
	sudo teensy-cli-loader --mcu=$(CONTROLLER) -w -v $(HEX)

wait-flash: flash
