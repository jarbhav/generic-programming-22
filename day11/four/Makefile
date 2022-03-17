a.out : rect.o client.o
	g++ rect.o client.o

rect.o : rect.cpp rect.h
	g++ -c rect.cpp

client.o : client.cpp rect.h
	g++ -c client.cpp