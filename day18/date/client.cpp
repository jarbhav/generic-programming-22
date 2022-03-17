#include<iostream>
using namespace std;
#include "date.h"

template<typename ptr_t>
void disp(ptr_t *first, ptr_t * last) {
    while (first != last) {
        cout << *first << "\n";
        ++first;
    }
}

int main() {
    date d1(15, 8, 1947);
    cout << d1 << "\n";

    date d2(d1);
    date d3;

    d3 = ++d1;  //d1.operator++()
    cout << d1 << d3 << endl;       //d1 and d3 both are new

    d3 = d2++; //d2.operator++(1)   //done by compiler   
    cout << d2 << d3 << endl;       //d3 old date and d2 new
}