#include "header.h"
#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    cout << "Sum of first two: " << add(num1, num2) << '\n';
    cout << "Sum of all three: " << add(num1, num2, num3) << '\n';
} 