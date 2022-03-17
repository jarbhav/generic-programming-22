#include <iostream>
using namespace std;
#include "ex4a.h"

int main() {
    int a(10);
    int b(15);
    cout << sum(a, b) << '\n';
    
    //cout << sum(3, 4, 5) << '\n'; - Number of arguments does not match so won't compile
    
    cout << sum(3.6, 7.7) << '\n';  //Compiler will do this:
                                    // sum((int)3.6, (int)7.7)
                                    // At compile time (Promotion happens)
    double c(3.6);
    double d(7.7);
    cout << sum(c, d) << '\n';      // sum((int)c, (int)d)
                                    // standard conversion happens
}

/*
g++ ex4.cpp -c
vaibhav@vaibhav-raj_CS554:~/Desktop/GP/day5$g++ ex4a.cpp -c
vaibhav@vaibhav-raj_CS554:~/Desktop/GP/day5$g++ ex4.o ex4a.o
vaibhav@vaibhav-raj_CS554:~/Desktop/GP/day5$./a.out 
*/

/*
Prototype:
    - matching arguments to parameters
        -in terms of #, type and order
        - # shoud definitely match
        - corresponding types may not exactly match
    - overloading
    - default parameters

Matching arguments to parameters has 6 steps:
    1. Exact match or trivial conversion
    2. generic functions
    3. Promotion
    4. std conversion
    5. User defined conversion
    6. type unsafe conversions

Promotion:
    - int is the preferred integral type instead of short
    - double is preferred floating point type
    - conversion of integral types to int and float to double is promotion
    - no loss of precision

std conversion:
    - conversion of any numeric type to any other numeric type
    - loss of precision possible
    - pointer is not a numeric type

struct padding:
    struct A {
        char ch;    // 1 byte
        int n;      // size of word : 4
    }
    It's size is undefined
    5 or 8
*/