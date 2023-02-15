bitwisemenu: major1.o clz.o endian.o parity.o
	gcc major1.o clz.o endian.o parity.o -o bitwisemenu
major1.o: major1.c major1.h
	gcc -c major1.c
parity.o: parity.c major1.h
	gcc -c parity.c
endian.o: endian.c major1.h
	gcc -c endian.c
clz.o: clz.c major1.h
	gcc -c clz.c
rotate.o: rotate.c major1.h
  gcc -c rotate.c
clean:
	rm *.o
