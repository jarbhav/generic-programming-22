// Playing with pointers
#include<iostream>
using namespace std;

int main() {
    int a[] = {11, 22, 33, 44, 55};
    int *p(a+5);    //p : dangling pointer
                    // p is "one past the end"

    cout << "a: " << a << "\t p: " << p << endl;    //we get address of both
                                                    //also there is 20 byte space between them

    cout << "what: " << *(p - 1) << endl;   //55
    cout << "what: " << p - a << endl;      //5
    // between p and a there are 5 components of type *p

    //p is valid pointer
    //just that it should not be dereferenced 
}