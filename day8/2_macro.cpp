#include<iostream>
using namespace std;

#define sq(x) x * x
#define sq1(x) (x) * (x)

//#define ABS(x) (((x) >= 0) ? (x) : (-x))  //Not preferred (too many brackets)
int main() {
    cout << sq(10) << endl; //100   
    cout << sq(2.5) << endl; // 2.5 * 2.5
    cout << sq(5) << endl; //will create new instantiation

    cout << sq(5 + 5) << endl; //5 + 5 * 5 + 5 = 35  (violates the law of least expectation)
    cout << sq1(5 + 5) << endl; //(5 + 5) * (5 + 5) = 100 
    cout << 10000/sq1(5 + 5) << endl; // 10000 / (5 + 5) * (5 + 5) = 10000

}