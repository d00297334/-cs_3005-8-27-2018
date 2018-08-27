main: main.o numbers.o
	g++ -o main main.o numbers.o

main.o: main.cpp numbers.h
	g++ -c main.cpp

numbers.o: numbers.cpp numbers.h
	g++ -c numbers.cpp


