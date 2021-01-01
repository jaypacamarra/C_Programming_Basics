output: main.o foo.o
	gcc main.o foo.o -o main

main.o:	main.c
	gcc -c main.c

foo.o: foo.c foo.h
	gcc -c foo.c

clean:
	rm *.o 
