/*
pointer:
    -may be initialized
    -should be explicitly dereferenced
    -pointer can be changed
    -can be grounded by using nullptr
reference:
    -has to be initialized
    -derefernces implicitly
    -can never be changed
    -can never be null
*/
#include <iostream>
using namespace std;

int main() {
#if 0
    int a(10);
    int b(20);
    int *p(&a);
    int *q;         //This is allowed in c++

    cout << *p << '\n';
    *p = 30;

    p = &b;

    p = nullptr;
#endif
    int a(10);
    int b(20);

    // r always refers to a
    // sort of alias for a
    int& r(a); //reference to int;
    //int& s; //Not allowed

    cout << r << endl;  //equivalent to cout << a << endl;
    r = 30;             //equivalent to a = 30;

    r = b;              //a = b
}