#include<iostream>
using namespace std;
#include "rect.h"

int main() {
    Rect r1;
    r1.read();
    r1.disp();
    cout << "area: " << r1.find_area() << endl;
    
    #if 0
    Rect r2;
    r2.read();
    r2.disp();
    cout << boolalpha;
    cout << "equal: " << r1.equal(r2) << endl;
    #endif

    r1.disp();
    r1.scale(2);
    r1.disp();

    Rect r3;
    r3 = r1.transpose();
    r3.disp();
}