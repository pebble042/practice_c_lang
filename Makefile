app = mem_return

STATIC = -static
CFLAGS = -Wall

.PHONY: default

default:
	gcc mem_return.c -o $(app)

clean:
	@rm -f *.o
	@rm -f *.a
	@rm -f $(app)
