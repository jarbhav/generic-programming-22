#include<iostream>
using namespace std;

#include "2_person.h"

int main() {
    person a;
    /*
    :: scope resolution operator
    structname::fnname()
    address of the structure variable through which the call is made
    is passed as the first argument
    */
    a.read_one();   //person::read_one(&a)         Compiler does this internally
    a.disp_one();   //person::disp_one(&a)
    a.disp_one();
}