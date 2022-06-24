OBJS = main.o calculate.o error_handling.o
MATS = calculate.o error_handling.o
ALL : SERVER Client
cc = gcc
CFLAGS = -g
lib = lstatic

SERVER : $(OBJS) lib
	$(cc) -o $@ $(OBJS) $(CFLAGS) -lyh -L./ -I./
lib : $(MATS)
	ar -r libyh.a $^
Client : input.o
	$(cc) -o $@ $^ $(CFALGS)
.c.o:
	$(cc) -c -o $@ $^ $(CFLAGS)
clean :
	rm -f *.o $@
	rm SERVER Client
	rm *.a
