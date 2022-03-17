#include <iostream>
using namespace std;

int a = 30;

void foo() {
    cout << "Global a: "<<  a << endl;
    cout << "ptr to global a: " << &a << '\n';
}