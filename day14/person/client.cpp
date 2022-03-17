#include<iostream>
using namespace std;

#include "person.h"

int main() 
{
#if 1   //v6
    char name[] = "amar";
    Person a(name, 20);
    a.disp();

    name[0] = ' ';
    a.disp();   //amar 20

    Person b;
    b.disp();

    char name1[] = "Chandra";
    Person c(name1, 99);
    c.disp();
    c = a; // c.operator=(a)

    c.disp();

    c = c;

    c.disp();

    a = b = c;

    a.disp();

    (a = b) = c;
#endif
}
