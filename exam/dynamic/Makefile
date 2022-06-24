OBJS = main.o calculate.o error_handling.o
MATS = calculate.o error_handling.o

TARGET = SERVER Client

cc = gcc
CFLAGS = -g
lib = lyh

ALL : $(TARGET)

SERVER : $(OBJS) lib fPIC
	$(cc) -o $@ main.c $(CFLAGS) -$(lib) -L./ -I./
path : 
	export LD_LIBRARY_PATH=/home/ubuntu/yh/exam/dynamic
lib : $(MATS) fPIC
	gcc -shared -o libyh.so $(MATS)
fPIC : calculate.c error_handling.c
	gcc -fPIC -c $^
Client : input.o
	$(cc) -o $@ $^ $(CFALGS)
clean :
	rm -f *.o $@
	rm *.so
	rm SERVER Client
