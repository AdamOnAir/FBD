default: all

all: windows linux

# Windows target
windows:
	cl /Fe:fbd.exe main.c /link

# Linux target
linux:
	gcc -o fbd main.c -static
