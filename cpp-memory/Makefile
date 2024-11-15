EXE = main
OBJS = main.o Cube.o
CLEAN_RM =

include ../_make/generic.mk

# Directory-specific rules:
addressOf: addressOf.cpp
	$(LD) $^ $(LDFLAGS) -o $@

foo: foo.cpp
	$(LD) $^ $(LDFLAGS) -o $@

puzzle: puzzle.cpp
	$(LD) $^ $(LDFLAGS) .objs/Cube.o -o $@

pointers: pointers.cpp 
	$(LD) $^ $(LDFLAGS) -o $@

all: addressOf foo puzzle pointers
CLEAN_RM += addressOf foo puzzle pointers
