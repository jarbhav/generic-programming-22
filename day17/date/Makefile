a.out: date.o client.o
	g++ date.o client.o
date.o: date.cpp date.h
	g++ -c date.cpp
client.o: client.cpp date.h
	g++ -c client.cpp