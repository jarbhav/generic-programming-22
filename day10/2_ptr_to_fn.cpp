#include<iostream>
using namespace std;


/*
int a;
int *b;
int **c;
int d[10]; b = d;
int e[5][6];        // e is a pointer to row of size 6
int (*f)[6];        // f is pointer to array
f = e;

int f1(int, int);       
int *f2(int *, int *);  
int (*f3)(int, int);    //f3 is a variable
int (*f4[4])(int, int); //f4 : array of 4 pointer to functions
*/

int add(int x, int y) { return x + y; }
int mul(int x, int y) { return x * y; }

int caller(int (*fn)(int, int), int x, int y) {
    return fn(x, y);    //callback
}
//callbak returns a boolean value

int main() {
    int (*ptr_fn)(int, int);    //ptr_fn : variable
    // pointer to function taking two int by value and return by value

    ptr_fn = add;
    cout << (*ptr_fn)(20, 30) << endl;    

    ptr_fn = &add;
    cout << (*ptr_fn)(20, 30) << endl;    
    
    cout << ptr_fn(20, 30) << endl;
    cout << (*add)(20, 30) << endl;    

    ptr_fn = mul;
    cout << ptr_fn(20, 30) << endl;    

    cout << caller(mul, 42, 10) << endl;
    cout << caller(add, 42, 10) << endl;    
}