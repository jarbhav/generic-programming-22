#include <iostream>
using namespace std;

extern int a; //something for the linker; a declaration
// for the compiler , nothing at runtime

int main() {
    cout << "a : " << a <<  "\n";
}

/*Line 4*/

// When using int a only
/*
g++ -c ex3.cpp
g++ -c client_ex3.cpp

nm ex3.o
0000000000000000 D a

nm client_ex3.o
0000000000000000 B a


g++ ex3.o client_ex3.o
/usr/bin/ld: client_ex3.o:(.bss+0x0): multiple definition of `a'; ex3.o:(.data+0x0): first defined here
collect2: error: ld returned 1 exit status
*/


// When using extern int a
/*
g++ -c client_ex3.cpp

nm client_ex3.o
                U a

g++ ex3.o client_ex3.o
Build proves to be successful
*/