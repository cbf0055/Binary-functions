output: major1.o parity.o rotate.o clz.o
	gcc major1.o parity.o rotate.o clz.o -o output
major1.o: major1.c
	gcc -c -Wall major1.c
parity.o: parity.c
	gcc -c -Wall parity.c
rotate.o: rotate.c
	gcc -c -Wall rotate.c
clz.o: clz.c
	gcc -c -Wall clz.c
clean:
	rm *.o output