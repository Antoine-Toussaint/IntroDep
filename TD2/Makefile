main: main.o module.o python-array.o date.o person.o
	gcc -o main main.o module.o python-array.o date.o person.o

main.o: main.c module.h python-array.h date.h person.h
	gcc -c main.c

module.o: module.c module.h
	gcc -c module.c

python-array.o: python-array.c python-array.h 
	gcc -c python-array.c

date.o: date.c date.h
	gcc -c date.c

person.o: person.c person.h date.o
	gcc -c person.c

run: main
	./main

clean: 
	rm -f main *.o