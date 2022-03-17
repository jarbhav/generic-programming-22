#include <iostream>
using namespace std;

class A
{
    private:
    const int x_;
    const int y_;

    public:
    A(int x, int y);    //constructor
    void disp() const;
};

A::A(int x, int y)
: x_(x), y_(y)              //member initialization list (available only in ctor)
//: y_(100), x_(y_)           // x : some junk value
//: x_(y_), y_(100)           // x: some junk value
{
    //x_ = x;               //const cannot be assigned
    //y_ = y;
    cout << "ctor\n"; 
}

void A::disp() const {
    cout << "x: " << x_ << '\t' << "y: " << y_ << endl;
}

int main() {
    A a1(20, 30);
    a1.disp();
}