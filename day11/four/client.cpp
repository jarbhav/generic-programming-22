#include<iostream>
using namespace std;
#include "rect.h"

int main() {
    Rect r1;
    r1.read();
    r1.disp();
    cout << "area: " << r1.find_area() << endl;

    Rect r2;
    r2.read();
    r2.disp();
    cout << boolalpha;
    cout << "equal: " << r1.equal(r2) << endl;
}