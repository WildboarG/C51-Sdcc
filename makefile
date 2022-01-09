main.hex : main.c
	sdcc -c tool.c
	sdcc main.c tool.rel
	packihx main.ihx > main.hex
clean:
	rm -rf *asm *.lst *.mem *.rst *.lnk *.rel *.sym *.ihx *.map *.lk
Writein:
	sudo stcflash main.hex
