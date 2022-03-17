#include <iostream>
using namespace std;

class A
{
    public:
    A();    //constructor
    ~A();   //destructor
};

A::A()
{
    cout << "ctor\n"; 
}

A::~A()
{
    cout << "dtor\n";
}

int main() {
    #if 0
    {
        cout << "one\n";
        A x;                 //Constructor is called here
        cout << "two\n";
    }                       //Destructor is called here
    #endif
    
    #if 0
    {
        cout << "one\n";
        A x[5];                 //ctor 5 times
        cout << "two\n";
    }                           //dtor 5 times
    #endif

    #if 0
    {
        cout << "one\n";
        A x;                    //ctor
        {
            A& y(x);            // no ctor call
        }                       // no dtor call
        cout << "two\n";
    }                           //dtor           
    #endif

    #if 0
    {
        cout << "one\n";
        A *p;                    // no ctor since we are not making an object

        p = new A;              // ctor
        /*
        new operator:
            allocates memory
            calls ctor
        */
        cout << "two\n";
    }                           // no dtor since the pointer dies    
    #endif                      // object at the heap becomes garbage
                                // memory leak


    #if 0
    {
        cout << "one\n";
        A *p;                    // no ctor since we are not making an object

        p = new A;              // ctor
        /*
        new operator:
            allocates memory
            calls ctor
        */
        delete p;
        /*
        delete operator:
            calls dtor;
            deallocates memory
       */
        cout << "two\n";
    }                           
    #endif

    #if 0
    {
        cout << "one\n";
        A &p(*new A);           //reference refers to an object which has been initialized       
        cout << "two\n";
        delete &p;
    }                           
    #endif
}