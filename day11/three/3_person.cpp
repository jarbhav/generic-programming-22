#include<iostream>
using namespace std;

#include "3_person.h"


void person::read_one() {
    cin >> this->name_ >> this->age_;
}

void person::disp_one() const{
    cout << this->name_ << " " << this->age_ << '\n';
}