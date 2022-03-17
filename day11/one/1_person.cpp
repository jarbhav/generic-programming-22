#include<iostream>
using namespace std;

#include "1_person.h"


void read_one(person& x) {
    cin >> x.name_ >> x.age_;
}

#if 0
// v1
void disp_one(person x) {
    cout << x.name_ << " " << x.age_ << '\n';
}
#endif

//v2
void disp_one(const person& x) {
    cout << x.name_ << " " << x.age_ << '\n';
}
//In case of structured type always pass by reference
//to const