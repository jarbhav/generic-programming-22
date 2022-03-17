#include<iostream>
#include <cstring>
using namespace std;

#include "person.h"

#if 0
//v1
void Person::disp() const {
    cout << name_ << '\t' << age_ << '\n';
}

Person::Person(char *name, int age)
: name_(name), age_(age)    //problem
{

}
#endif

#if 0
//v2
void Person::disp() const {
    cout << name_ << '\t' << age_ << '\n';
}

Person::Person(char *name, int age)
//we can't use sizeof here because a parameter can't remember that it's an array
//so we are using strlen
: name_(new char[strlen(name) + 1]), age_(age)
{
    //strcpy(name_, name);
    /*
    strlen(name) + 1 because 
    len(amar) = 4
    len('\0') = 1
    */
    strncpy(name_, name, strlen(name) + 1);
}

Person::Person()
//we are designing a default constructor
: name_(new char), age_(0)
{
    strncpy(name_, "", 1);  //name_[0] = '\0'
}

Person::~Person()
{
    delete [] name_;    // name_ = nullptr
    //this version is also not optimal because
    //book keeping requires that
    //new matches with delete
    //new[] matches with delete[]

    /*
    So we have a few design choices in front of us:
        1. Modify the layout of the class to include a boolean value which
            will indicate whether name_ is being assigned a single char or array
            and then put an if condition in dtor to check this
            this will solve the problem but there are certain costs associated with it
                a. if conditions are instruction cache unfriendly
                    so it's a general rule to try and avoid them
                b. adding a new bool to the class will increase the size 
        2. We can do a trick:
            whenever we need to allocate a single char space
            we can create an array of size 1
            This will help with book keeping
            But improvments can still be made
    */
}
#endif

#if 0
//v3
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
//we are designing a default constructor
//This will help with book keeping
//But improvments can still be made
: name_(new char[1]), age_(0)
{
    strncpy(name_, "", 1);  //name_[0] = '\0'
}

Person::~Person()
{
    delete [] name_;
}
#endif


#if 0
//v4
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
//we are designing a default constructor
//This will help with book keeping
//But improvments can still be made
: name_(new char[1]), age_(0)
{
    strncpy(name_, "", 1);  //name_[0] = '\0'
}

void Person::operator=(const Person& rhs) {
    //release the resource
    delete [] name_;
    // allocate resources
    name_ = new char[strlen(rhs.name_) + 1];
    //copy name and age
    strcpy(name_, rhs.name_);
    age_ = rhs.age_;
}

Person::~Person()
{
    delete [] name_;
}
#endif

#if 0
//v5
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

void Person::operator=(const Person& rhs) {
    //handle self assignment
    if(this != &rhs) {
        delete [] name_;
        name_ = new char[strlen(rhs.name_) + 1];
        strcpy(name_, rhs.name_);
        age_ = rhs.age_;
    }
}

Person::~Person()
{
    delete [] name_;
}
#endif

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
#endif