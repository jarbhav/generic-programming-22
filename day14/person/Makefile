a.out: person.o client.o
	g++ person.o client.o
person.o: person.cpp person.h
	g++ -c person.cpp
client.o: client.cpp person.h
	g++ -c client.cpp