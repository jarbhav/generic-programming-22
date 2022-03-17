#include<iostream>
using namespace std;
#include "date.h"

ostream& operator<<(ostream&o, const date& d) {
    return o << d.dd_ << "-" << d.mm_ << "-" << d.yy_ << "\n";
} 

#if 0

// pre increment is more efficient
date& date::operator++()
{
    //logic to increment
    ++dd_;
    return *this;
}

// two extra objects are there
// 4 extra function calls
date date::operator++(int)
{
    //logic to increment
    date temp(*this);
    ++dd_;
    return temp;        //local object so return by value
}
// Above two functions work correctly
// but we are just repeating the logic
#endif

#if 1
/*
    Two design approaches:
        1. Make one call the other
        2. Make both call a helper function
*/
date& date::operator++()
{
    //logic to increment
    ++dd_;
    return *this;
}

date date::operator++(int)
{
    //logic to increment
    date temp(*this);
    //Make post call pre
    //To have logic at one place
    ++*this;
    return temp;
}

#endif