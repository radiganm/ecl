#!/usr/bin/make -f
## boostrap.mk (for ECL)
## Mac Radigan

.PHONY: update packages-apt install build install
.DEFAULT_GOAL := build

build:
	#autoreconf --force --install
	./configure --prefix=/opt/local && $(MAKE)

install: build
	./configure --prefix=/opt/local && make

update:
	git pull

packages-apt:
	sudo apt-get install -y ecl
	sudo apt-get install -y autoconf
	sudo apt-get install -y automake
	sudo apt-get install -y libtool
	sudo apt-get install -y build-essential
	sudo apt-get install -y libgc-dev
	sudo apt-get install -y libgmp3-dev
	sudo apt-get install -y libz-dev
	sudo apt-get install -y libatomic-ops-dev

## *EOF*
