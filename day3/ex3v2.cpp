int a = 100; // A definition
//const int b = 200; // does not go the linker
extern const int b = 200;


/*
nm ex3v2.o
0000000000000000 D a
0000000000000000 R b

nm client_ex3v2.o
                 U a
                 U b
*/