#include<iostream>
using namespace std;

#include "person.h"

int main() 
{
#if 1   
    char name[] = "amar";
    Person a(name, 20);
    a.disp();
    Person b(a);
    b.disp();
#endif
}
