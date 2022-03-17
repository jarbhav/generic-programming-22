#include<iostream>
using namespace std;

//From the caller's perspective both function's are the same
//Both of them will make a copy of the variable being passed
//Thus not making any changes to the passed parameters
#if 0
void foo(int x) {
    cout << "foo x\n";
}

void foo(const int x) {
    cout << "const foo x\n";
}
#endif
// The above two function won't compile


void bar(int& x) {              //Caller's argument changes in this function
    cout << "bar x\n";
}

void bar(const int& x) {        //Caller's argument cannot change in this 
    cout << "const bar x\n";
}
