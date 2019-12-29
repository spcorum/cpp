output: main.o Chrono.o
	g++ -std=c++11 main.o Chrono.o -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Chrono.o: Chrono.cpp Chrono.h
	g++ -std=c++11 -c Chrono.cpp

clean:
	rm *.o output
