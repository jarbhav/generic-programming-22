#include <iostream>
using namespace std;

extern int a; //something for the linker; a declaration
// for the compiler , nothing at runtime
extern const int b;

int main() {
    cout << "a : " << a <<  "\n";
    cout << "b : " << b <<  "\n";
}