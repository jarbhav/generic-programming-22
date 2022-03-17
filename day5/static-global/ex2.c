#include <iostream>
using namespace std;

void foo();

static int a;
int main() {
    cout << "Static a: " << a << '\n';
    cout << "ptr to static a: " << &a << '\n';
    foo();
}