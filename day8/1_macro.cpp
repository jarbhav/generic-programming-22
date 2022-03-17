#include<iostream>
using namespace std;

//macro processor for defining const

#define A 10

int main() {
    printf("A : %d\n", A);
    //directives can come anywhere
    //because macro processor doesn't know C/C++
    #define B 20
    printf("B : %d\n", B);
    
    #if 0
    //This won't work
    //#define causes textual replacement of the value below it not aboveW
    printf("C : %d\n", C);
    #define C 30
    #endif

    int d = 40;
    {
        //Inside the block
        //we have automatic variables 
        int d = 400;
        printf("d : %d\n", d); //400
    }
    printf("d : %d\n", d); //40

    #define A 100
    printf("A : %d\n", A); //100 but with warning

    #define D 40
    {
        #define D 400
        printf("D : %d\n", D); //400
    }
    //There is no concept of scope in case of a preprocessor
    printf("D : %d\n", D); //400
}

//g++ -E <filename> : gives putput of preprocessor