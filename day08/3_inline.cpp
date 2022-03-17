#include<iostream>
using namespace std;
inline int sq(int x);

int main() {
    cout << "one\n";
    int n;
    cin >> n;
    cout << sq(n) << '\n';
    cout << "two\n";
}

int sq(int x) {
    return x * x;
}

/* 
g++ -S -c -O 3_inline.cpp
*/