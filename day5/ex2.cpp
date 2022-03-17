#include <iostream>
using namespace std;

int main() {
#if 0
    // Some C code
    int *p;
    p = (int *)malloc(sizeof(int));
    //
    free(p);    //Since parameter passing in C is pass by value
                //free(p) cannot change the value of p
                //p will be dangling

    int *q;
    q = (int *)malloc(sizeof(int) * 4);
    
    //free(q + 1); ??? Undefined behaviour

    free(q);
    // Free knows how much blocks to remove because of book-keeping    
#endif
/*
C++:
    -new operator:
        -to allocate new memory
        -initialze(calls ctor)
    -delete operatot:
        -to deallocate memory
        -de_initialization (calls dtor)
*/
    int *p;
    p = new int(10);        // new op - may not have book keeping
    cout << *p << endl;
    delete p;

    int *q;
    q = new int[4];         // new[] op - will have book keeping
    // array on the heap    
    delete []q;               // delete[] op
}