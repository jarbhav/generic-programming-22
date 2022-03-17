a.out: complex.o client.o
	g++ complex.o client.o
complex.o: complex.cpp complex.h
	g++ -c complex.cpp
client.o: client.cpp complex.h
	g++ -c client.cpp