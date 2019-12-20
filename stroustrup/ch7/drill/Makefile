output: use.o my.o
	g++ use.o my.o -o output

use.o: use.cpp my.h
	g++ -c use.cpp

my.o: my.cpp my.h
	g++ -c my.cpp

clean:
	rm *.o output
