#ifndef SERVER_H
#define SERVER_H

int add(int num1, int num2);
int add(int num1, int num2, int num3);

#endif

/*
Here we are overloading. (More than one function with the same name)
-interfaces will not be the same

Over loading is based on matching of arguments to parameters 
there should be some difference

-compile time mechanism
-names are mangled by the compiler to support this
-names are unique for the linker

It is not based on returned type
int foo(int);
double foo(int);
Cannot be resolved

Name mangling is not standardized
each compiler may mangle the name differently
*/