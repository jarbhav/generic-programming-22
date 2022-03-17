#include "header.h"
#include <iostream>

void foo(int a) {
    std::cout << "Hey this is int" << '\n';
}

void foo(char c) {
    std::cout << "Hey this is char" << '\n';    
}

void foo(double d) {
    std::cout << "Hey this is double" << '\n';
}
