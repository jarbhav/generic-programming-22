#include<iostream>
using namespace std;
#include "complex.h"

#if 0
int main() 
{
    Complex c1(2.2, 3.3);
    c1.disp();

    Complex c2(4.4);
    c2.disp();

    #if 0
    Complex c3(); //won't work becuse of C legacy
    /*
    c3 is a function declaration with no parameters returning an object
    of class complex by value
    */
    #endif

    Complex c3;
    c3.disp();

    c3 = c1.add(c2);
    c3.disp();

    c3 = c1.add(2.5);
    // c3 = c1.add(Complex(2.5)) compiler does this
    // happens only when there is a single argument
    // due to user defined conversion
    // -single argument ctor
    // -type conversion op

    //To stop this implicit conversion
    //make constructor explicit
    c3.disp();
}
#endif

#if 0
int main() 
{
    Complex c1(2.2, 3.3);
    c1.disp();

    Complex c2(4.4);
    c2.disp();

    Complex c3;
    c3.disp();
    
    c3 = c1 + c2;   //To do this we have to use operator functions
    c3.disp();      // c1.operator+(c2)    

    c3 = c1 + 2.5;  //c1.operator+(2.5) // c1.operator+(Complex(2.5)) 
    c3.disp();

    c3 = 2.5 + c1;  //Won't compile
    /*
    Cannot convert double to an object of the class to introduce a
    function call
    */
    c3.disp();
}
#endif

#if 0
int main() 
{
    Complex c1(2.2, 3.3);
    c1.disp();

    Complex c2(4.4);
    c2.disp();

    Complex c3;
    c3.disp();
    
    c3 = c1 + c2;
    c3.disp();

    c3 = c1 + 2.5;      //operator+(c1, Complex(2.5))
    c3.disp();

    c3 = 2.5 + c1;      //operator+(Complex(2.5), c1)
    c3.disp();

    cout << c1;
    /*
    Cannot be a member of complex class since first operand
    is not an object of complex class

    We can make it friend of complex
    since position of operand is not right
    */
    cout << c2 << " " << c3;
}
#endif

#if 1
class MyNum
{
    private:
    int val_;
    
    public:
    MyNum(int val = 0) : val_(val) {}   //internal linkage
    friend ostream& operator<<(ostream&, const MyNum&);
    MyNum sqr() const {return val_ * val_;}
    friend MyNum square(const MyNum& n);
};
ostream& operator<<(ostream& o, const MyNum& n) 
{
    return o << n.val_ << "\n";
}

MyNum square(const MyNum& n)
{
    return n.val_ * n.val_; 
}

int main() 
{
    MyNum n(20);
    cout << n.sqr() << endl;    //Not user friendly
    cout << square(n) << endl;
}
#endif