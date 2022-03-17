#include<iostream>
using namespace std;


/*
t should support :
    !=, ==

*/
template <typename ptr_T, typename P>
ptr_T search(ptr_T first, ptr_T last, P key) {
    while(first != last && *first != key) //prefer this
    {
        ++first;
        // first += 1 NO
    }
    return first;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 6, 7, 8, 9};
    int* res;

    res = search(a, a + 5, 4);
    if (res == a + 5) {
        cout << "Not found" << endl;
    }
    else {
        cout << "found: " << *res << endl;
    }
    
    res = search(b, b + 5, 999);
    if (res == b + 5) {
        cout << "Not found" << endl;
    }
    else {
        cout << "found: " << *res << endl;
    }
}