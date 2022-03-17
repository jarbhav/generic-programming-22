#include<iostream>
using namespace std;

int main() {
    int a[5];
    cout << "a: " << a << endl;         // pointer to int
    cout << "&a: " << &a << endl;       // pointer to an array
    
    cout << "-------------------------" << endl;
    
    cout << "a + 1: " << (a + 1) << endl;
    cout << "&a + 1: " << (&a + 1) << endl;


    int *p = a + 1;
    cout << &p << endl;         // pointer to pointer
    cout << (&p + 1) << endl;   // pointer to pointer
    cout << sizeof(p) << endl;

    cout << "--------------------------------" << endl;

    int array[] = {10, 20, 30, 40, 50};
    int *ptr = array + 2;
    int x = (*ptr)++;
    cout << "x: " << x << endl; 
    cout << *ptr << endl;

    int y = *ptr++;
    cout << "y: " << y << endl; 
    cout << *ptr << endl;
}

/*
int a[5][4];
void foo(a);

void foo(int a[][]);    //NO   
void foo(int** a);      //NO
void foo(int a[5][]);   //NO

void foo(int a[][4]);   //YES
void foo(int (*a)[4]);  //YES

void bar(int n, int a[][n]);    //YES
*/