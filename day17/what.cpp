#include<iostream>
using namespace std;

#if 0
//v1
void disp(int *first, int * last) {
    while (first != last) {
        cout << *first << "\t";
        ++first;
    }
    cout << "\n";
}
#endif

//v2
template<typename ptr_t>
void disp(ptr_t *first, ptr_t * last) {
    while (first != last) {
        cout << *first << "\t";
        ++first;
    }
    cout << "\n";
}

// T should support:
// copy constructor
// assignment
template<typename T>
void myswap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}
/*
    T temp; //default constructor needs to be supported by T if do this way
    temp = x;
*/

// T should support:
// operator<
template<typename T>
void mysort(T a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i]) {
                myswap(a[i], a[j]);
                /*
                In the above line we are using parameter passing by reference
                so all needed functioonality is builtin
                
                If we would have used parameter passing by value 
                we would have required a copy constructor
                */
            }
        }
    }
}

int main() {
    int a[] = {33, 11, 55, 22, 44};
    disp(a, a+5);

    mysort(a, 5);
    disp(a, a+5);
    cout << endl;

    double b[] = {3.3, 1.1, 5.5, 2.2, 4.4};
    disp(b, b+5);
    mysort(b, 5);
    disp(b, b+5);
    cout << endl;
    /*
    pointer arithmetic and dereferencing goes wrong
    if we use the first version of disp()

    Making it a template (v2) removes this issue
    */
}
