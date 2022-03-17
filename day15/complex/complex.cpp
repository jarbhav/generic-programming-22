#include<iostream>
using namespace std;
#include "complex.h"

void Complex::disp() const
{
    cout << rp_ << " + i" << ip_ << '\n';
}

Complex::Complex(double rp, double ip)
: rp_(rp), ip_(ip)
{
}

#if 0
Complex Complex::add(const Complex& rhs) const
{
    Complex temp;
    temp.rp_ = this->rp_ + rhs.rp_;
    temp.ip_ = this->ip_ + rhs.ip_;
    return temp;
}
#endif
/*
We can't do return by reference for the above function (temp is a local object)

We can make this object static (iternal static) and return refernce to it
    - Complex c1, c2, c3, c4;
    - equal(c1.add(c2), c3.add(c4)) //always true
    - The above statement will fail since when we invoke add the second time
    - it will overwrite the previous temp value
    - hence always returning true

Can we make a dynamic object and return by reference
    - Complex *p; p = new Complex; ...; return *p;
    - Complex& Complex::add()
    - But who cleans it is a problem;

Thus We prefer to return by value
*/

#if 0
Complex Complex::add(const Complex& rhs) const
{
    Complex temp(this->rp_ + rhs.rp_, this->ip_ + rhs.ip_);
    //better version
    //previously we were just calling the default constructor for temp
    //but never using that value
    return temp;
}
#endif

#if 0
Complex Complex::add(const Complex& rhs) const
{
    return Complex(this->rp_ + rhs.rp_, this->ip_ + rhs.ip_);
    //return object optimization
    /*
    This is possible because compiler will create a temporary object
    when we call the the ctor explicitly in this fashion
    */
}
#endif

#if 0
Complex Complex::operator+(const Complex& rhs) const
{
    //operator function version
    return Complex(this->rp_ + rhs.rp_, this->ip_ + rhs.ip_);
}
#endif

Complex operator+(const Complex& lhs, const Complex& rhs) 
{
    return Complex(lhs.rp_ + rhs.rp_, lhs.ip_ + rhs.ip_);   //This gives error as ip_ and rp_ are private
}

ostream& operator<<(ostream& o, const Complex& c)
{
    return o << c.rp_ << " + i" << c.ip_ << endl;
}

