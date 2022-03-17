#include<iostream>
using namespace std;

#include "person.h"

int main() 
{
#if 0   //v1
    char name[] = "amar";
    Person a(name, 20);
    a.disp();
    
    //here aliasing happens
    //name and character pointer in 'a' point to the same thing
    name[0] = ' ';
    a.disp();   // mar 20
#endif

#if 0   //v2
    char name[] = "amar";
    Person a(name, 20);
    a.disp();

    name[0] = ' ';
    a.disp();   //amar 20
#endif

#if 0   //v3
    char name[] = "amar";
    Person a(name, 20);
    a.disp();

    name[0] = ' ';
    a.disp();   //amar 20

    Person b;
    b.disp();
#endif

#if 0   //v4
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

  //c = a;          //layout of class is similar to C structure
                    //structures are assignment compatible
                    //so objects can also be assigned to each other

                    //here it will lead to lot of errors(see notes)
                    // if we have not defined our own copy assignment operator

    // when we have defined copy assignment operator
    c = a; // c.operator=(a)

    c.disp();
#endif

#if 0   //v5
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
#endif

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
