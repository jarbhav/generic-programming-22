#include<iostream>
using namespace std;
#include "4_varargs.h" 

#include <cstdarg>  //stdarg.h in C used for variable args

int sum(int n, ...) {
    va_list va;
    //make va point to the first unnamed parameter
    va_start(va, n);
    //2nd argument : last named parameter
    int s = 0;
    while(n--) {
        s += va_arg(va, int);   //2nd arg: expected type
        //gets the value from the stack of the specified type
        //advances va to the next locationS
    }
    va_end(va);
    //breaks association of va with the stack
    return s;
}

/*
va_list 
    - is a typedef
    - used to create an interface

va_start - macro
va_end   - macro

Since va has to change
parameter passing by value
So they have to be macro in case of lC
*/
