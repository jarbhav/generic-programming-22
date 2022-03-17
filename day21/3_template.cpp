#include<iostream>
using namespace std;
#include<typeinfo>

//default type parameter
// all parameters can be default
// left parameters to specified in instantiation
// right parameters are taken as default
template<typename T = double>
class A
{
};

template<typename T1 = int, typename T2 = double>
class B
{
};

template<typename T1 = int, typename T2 = T1>
class C
{
};

template<typename T1 = int, typename T2 = A<T1>>
class D
{
};

int main()
{
    A<int> a1;
    cout << typeid(a1).name() << '\n';      //1AIiE
    A<> a2;
    cout << typeid(a2).name() << '\n';      //1AIdE
    A<A<char>> a3;
    cout << typeid(a3).name() << '\n';      //1AIS_IcEE

    cout << "---------------------------------------------------" << endl;

    B<char, int> b1;
    cout << typeid(b1).name() << '\n';      //1BIciE
    B<char> b2;
    cout << typeid(b2).name() << '\n';      //1BIcdE
    B<> b3;
    cout << typeid(b3).name() << '\n';      //1BIidE

    cout << "---------------------------------------------------" << endl;

    C<char, long> c1;
    cout << typeid(c1).name() << '\n';      //1CIclE
    C<char> c2;
    cout << typeid(c2).name() << '\n';      //1CIccE
    C<> c3;
    cout << typeid(c3).name() << '\n';      //1CIiiE

    cout << "---------------------------------------------------" << endl;

    D<char, long> d1;
    cout << typeid(d1).name() << '\n';      //1DIclE
    D<char> d2;
    cout << typeid(d2).name() << '\n';      //1DIc1AIcEE
    D<> d3;
    cout << typeid(d3).name() << '\n';      //1DIi1AIiEE
}

