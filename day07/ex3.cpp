#include<iostream>
using namespace std;

//Return mechanisms

//return by value
int f1(int x) {
    return x;
}

//return by reference
int& f2(int& x) {
    return x;
}
//return by refernce to const
/*
Bad function(reference to local variable):
    -returns a reference to a local variable
    -causes dangling reference
    -if we return a reference, it should refer to 
    something which exists in the calling environment
*/
int& f3(int x) {
    return x;
}

int main() {
    int a(10);
    int b;
    b = f1(a);

    b = f2(a); 

    f2(a) = 20;
    cout << "a: " << a << '\n';

    b = f3(a);                  //will cause dangling reference
}