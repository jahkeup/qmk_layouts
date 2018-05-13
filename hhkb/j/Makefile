KEYBOARD=hhkb
CONTROLLER=atmega32u4

QMK_TOP=../../../..
LAYOUT=j
HEX=$(QMK_TOP)/$(KEYBOARD)_$(LAYOUT).hex

build: $(HEX)

$(HEX): $(wildcard *.c)
	make -C $(QMK_TOP) $(KEYBOARD):$(LAYOUT) LAYOUTS=hhkb

clean:
	rm -f $(HEX)

flash: $(HEX)
	sudo dfu-programmer $(CONTROLLER) erase --force
	sudo dfu-programmer $(CONTROLLER) flash $(HEX)
	sudo dfu-programmer $(CONTROLLER) launch

wait-flash:
	@printf "Enter sudo password here first if uncached. "
	@sudo -v
	@echo
	@printf "Ready? Press enter to proceed. "
	@read
	@sleep 3
	make -C . flash

