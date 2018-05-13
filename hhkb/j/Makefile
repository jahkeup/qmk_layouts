KEYBOARD=hhkb
CONTROLLER=atmega32u4

QMK_TOP=../../../..
LAYOUT=j
HEX=$(QMK_TOP)/$(KEYBOARD)_$(LAYOUT).hex

$(HEX): build

build:
	make -C $(QMK_TOP) $(KEYBOARD):$(LAYOUT)

flash: $(HEX)
	sudo dfu-programmer $(CONTROLLER) erase --force
	sudo dfu-programmer $(CONTROLLER) flash $(HEX)
	sudo dfu-programmer $(CONTROLLER) launch
