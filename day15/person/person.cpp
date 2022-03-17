#include<iostream>
#include <cstring>
using namespace std;

#include "person.h"

#if 1
//v6
#include <cstring>
void Person::disp() const {
    cout << name_ << '\t' << age_ << '\n';
}

Person::Person(char *name, int age)
: name_(new char[strlen(name) + 1]), age_(age)
{
    strncpy(name_, name, strlen(name) + 1);
}

Person::Person()
: name_(new char[1]), age_(0)
{
    strncpy(name_, "", 1);  //name_[0] = '\0'
}

//return an object back to support cascading
Person& Person::operator=(const Person& rhs) {
    //handle self assignment
    if(this != &rhs) {
        delete [] name_;
        name_ = new char[strlen(rhs.name_) + 1];
        strcpy(name_, rhs.name_);
        age_ = rhs.age_;
    }
    return *this;
}

Person::~Person()
{
    delete [] name_;
}

//Copy constructor
Person::Person(const Person& rhs)
: name_(new char[strlen(rhs.name_) + 1]), age_(rhs.age_)
{
    strcpy(name_, rhs.name_);
}
#endif