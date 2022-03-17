#include<iostream>
using namespace std;

int a;          //variable
typedef int t;  //type

t b;            // int b;


int add(int x, int y) { return x + y; }
int mul(int x, int y) { return x * y; }

int main() {
    int (*ptr_fn) (int, int);           //variable
    typedef int (*ptr_fn_t) (int, int); //typedef
    
    ptr_fn_t fn;
    fn = add;
    cout << fn(3, 4) << endl;
}