#include<iostream>
using namespace std;

#include "1_person.h"
#include "1_person.h"
// the above two inclusions would have given 
// an error but since we have included
// a guard in the header file

int main() {
    person a;
    read_one(a);
    disp_one(a);
}