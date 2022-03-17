#include<iostream>
using namespace std;

class Ex 
{
    public:
    void foo(double);
    private:
    void foo(int);
};

void Ex::foo(double) 
{
    cout << "foo double\n";
}

void Ex::foo(int) 
{
    cout << "foo int\n";
}

int main() 
{
    Ex ex;
    //ex.foo(25);     //throws error because of access (check notes: fails in 3rd step)
}