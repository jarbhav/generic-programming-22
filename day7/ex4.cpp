#include <iostream>
using namespace std;

int main() {
    const int a(10);
    const int& ra(a);

    int b(20);
    int& rb1(b);
    rb1 = 30;
    cout << "b : " << b << '\n';
    
    //Conversion of variables to const -> Trivial
    const int& rb2(b);
    //Conversion of const to variable requires an explicit casting
    //Undefined behaviour
    cout << "rb2 : " << rb2 << endl;
    b = 50;
    cout << "rb2 : " << rb2 << endl;
}