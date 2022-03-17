#include<iostream>
using namespace std;

#if 0
int foo(int *ptr) {
    return reinterpret_cast<int>(ptr);
}
#endif
/*
Compile time: array is an array
Runtime:      array degenerates to a pointer  
*/
int main() {
    int a[] = {11, 33, 55, 44, 22}; //C array
    
    //a[5] = 111;   undefined behaviour; index out of bounds

    int *p(a);
    cout << boolalpha;
    cout << (p == a) << endl;   //will give true because array is pointer at runtime

    cout << (*p == *a) << '\n'; //true because after derefrencing we get int

    //cout << (foo(p) == foo(a)) << endl; //true because value of p and a are same

    cout << (sizeof(p) == sizeof(a)) << endl;   //false
                                                // at compile time both are different
                                                // at runtime only both are pointers
                                                // sizeof is an compile time operator
    int xa(10);
    int b;
    b = sizeof(xa = 20); //b undefined
    /*
    sizeof(<expr>) or sizeof(<type>)
    sizeof is an operator and is completely handled by the compiler 
    */
    cout << xa << endl;  //10
}
