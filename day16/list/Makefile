a.out: list.o client.o
	g++ list.o client.o
list.o: list.cpp list.h
	g++ -c list.cpp
client.o: client.cpp list.h
	g++ -c client.cpp