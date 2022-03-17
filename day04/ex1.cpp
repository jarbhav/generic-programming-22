#include<iostream>
using namespace std;
/*
Variable has:
-name
-location
-value
-storage class
-qualifier

Declaration:
-meaningful only for global variables
-for the compiler

Definition:
-causes memory allocation
-where allocation happens depends on the storage class
-one definition rule

Initialization:
-done at the point of definition
-done only once
-not an expression
-more efficient than assignment
-Rule is to define a varible obny when we know how to initialize it
-default initialization:
    -global, static variables: initialized to 0
    -others are not initialized

Assignment:
-an expression
-low precedence
-right to left
*/
int main() {
    // ways of initialization
    int a = 10; //lexical ambiguity with '='
                // it is used for initialization as well as assignment
                // this method comes from C

    int b(20);  //preferred way
    int c{20};  //preferred way
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    int d(2.5); //converts double to int - narrowing
    int e{2.5}; //Not allowed
}
/*
Pointers:
-alias
-dangling pointer
    - no location but access
-garbage = memory leak
    - location but no access
*/