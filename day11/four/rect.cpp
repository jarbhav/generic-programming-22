#include<iostream>
using namespace std;
#include "rect.h"

void Rect::read() {
    //cin >> this->length_ >> this->breadth_;
    cin >> length_ >> breadth_; 
}

void Rect::disp() const{
    cout << "length: " << this->length_ << " breadth: " << this->breadth_ << endl;
}

int Rect::find_area() const{
    return length_ * breadth_;
}

// access control:
// based on object ?
// based on class ?
/*
access control is based on the type
*/

bool Rect::equal(const Rect& rhs) const {
    return length_ == rhs.length_ && breadth_ == rhs.breadth_;
}