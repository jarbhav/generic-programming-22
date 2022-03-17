a.out : 3_person.o 3_client.o
	g++ 3_person.o 3_client.o

3_person.o : 3_person.cpp 3_person.h
	g++ -c 3_person.cpp

3_client.o : 3_client.cpp 3_person.h
	g++ -c 3_client.cpp