#ifndef COMPLEX_H
#define COMPLEX_H

#if 0
class Complex
{
    private:
    double rp_;
    double ip_;

    public:
    /*
    making it explicit to stop implicit conversions
    */
    //explicit
    Complex(double = 0.0, double = 0.0);    //trivial ctor (class by default is in canonical form)
    
    Complex add(const Complex&) const;
    
    void disp() const;
};
/*
Adding two complex numbers, we have two design choices:
1. have two complex numbers as parameters and return the sum
        -this is preferred
        a. supports cascading
        b. similar to the behaviour of builtin numeric types

2. have two complex numbers as parameters + one more reference to complex number
    which gets the result
*/
#endif

#if 0
class Complex
{
    private:
    double rp_;
    double ip_;

    public:
    Complex(double = 0.0, double = 0.0);
    
    Complex operator+(const Complex&) const; //operator function
    /*
    This doesn't work for all cases
    */
    void disp() const;
};
#endif

#if 0
class Complex
{
    private:
    double rp_;
    double ip_;

    public:
    Complex(double = 0.0, double = 0.0);
    void disp() const;
};

Complex operator+(const Complex& lhs, const Complex& rhs);
#endif

#if 1
//friend functions
//we wanted to keep the strcuture of class same
//keeping ip_ and rp_ private
class Complex
{
    private:
    double rp_;
    double ip_;

    public:
    Complex(double = 0.0, double = 0.0);
    void disp() const;
    friend Complex operator+(const Complex& lhs, const Complex& rhs);
    friend ostream& operator<<(ostream& o, const Complex& c);
};

#endif

#endif