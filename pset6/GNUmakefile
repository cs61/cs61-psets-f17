# Default optimization level
O ?= 2

all: pong61

-include build/rules.mk

LIBS = -lpthread -lm

%.o: %.c $(BUILDSTAMP)
	$(call run,$(CC) $(CPPFLAGS) $(CFLAGS) $(O) $(DEPCFLAGS) -o $@ -c,COMPILE,$<)

pong61: pong61.o
	$(call run,$(CC) $(CFLAGS) $(O) -o $@ $^ $(LDFLAGS) $(LIBS),LINK $@)

run: pong61
	./pong61

clean: clean-main
clean-main:
	$(call run,rm -rf pong61 *.o *~ *.bak core *.core,CLEAN)
	$(call run,rm -rf $(DEPSDIR) out *.dSYM)

distclean: clean

.PRECIOUS: %.o
.PHONY: all clean clean-main clean-hook distclean run check check-% prepare-check
