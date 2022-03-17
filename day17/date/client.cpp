#include<iostream>
using namespace std;
#include "date.h"

/*
    ptr_t should support:

    component type(*p) where p is of type ptr_t
        put to operator
*/
template<typename ptr_t>
void disp(ptr_t *first, ptr_t * last) {
    while (first != last) {
        cout << *first << "\n";
        ++first;
    }
}

template<typename T>
void myswap(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

template<typename T>
void mysort(T a[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i]) {
                myswap(a[i], a[j]);
            }
        }
    }
}


int main() {
    //dem1
    date d1(15, 8, 1947);
    cout << d1 << "\n";
    
    //dem2
    date d[] = {
        {26, 12, 2004},         //Tsunami
        {26, 1, 2001},          //Earthquake
        {30, 1, 1948},          //MG Killed
        {11, 1, 1966},          //LBS Assassinated
        {11, 9, 2001}           //SCB Disappeared
    };
    //cout << d[3] << "\n";

    //dem3
    disp(d, d+5);
    cout << "----------------------------------------------------------" << endl;
    mysort(d, 5);
    disp(d, d+5);
}