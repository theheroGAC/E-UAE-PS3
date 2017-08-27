# shaders are not compiled as a part of the main build because 
# you need to have nvidia compilers installed. 
# Run this makefile only if you want to modify shaders 

ifeq ($(strip $(PSL1GHT)),)
$(error "PSL1GHT must be set in the environment.")
endif

include $(PSL1GHT)/ppu_rules

all: arcade_shader.vpo.o arcade_shader.fpo.o
	rm  -f *.h

