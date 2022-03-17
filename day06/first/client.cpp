#include "header.h"
#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1, num2, num3;
    
    std::cout << "Sum of first two: " << add2(num1, num2) << '\n';
    std::cout << "Sum of all three: " << add3(num1, num2, num3) << '\n';
} 