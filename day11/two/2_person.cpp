#include<iostream>
using namespace std;

#include "2_person.h"


void person::read_one() {
    cin >> this->name_ >> this->age_;
}

void person::disp_one() const{
    cout << this->name_ << " " << this->age_ << '\n';
    //this->age_ -= 10;
}