#include <iostream>
using namespace std;

void what(int& x, int& y) {
    int a(x); int b(y);
    while(a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    x /= a;
    y /= b;
}

int main() {
    int m(25);
    int n(15);
    what(m, n);
    cout << m << '\t' << n << endl;

    //Aliasing happens here inside the what function
    what(m, m);
    cout << m << endl;  // output is 0 : draw stack and figure out
}