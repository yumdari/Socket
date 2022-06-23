OBJS = main.o print.o input.o
TARGET = test
cc = gcc
CFLAGS = -g
LDFLAGS = -lpthread

$(TARGET) : $(OBJS)
	$(cc) -o $@ $^ $(CFLAGS) -L. $(LDFLAGS)
.c.o:
	 $(cc) -c -o $@ $^ $(CFLAGS)
clean :
	rm -f *.o $@
