#include<iostream>
using namespace std;


template <typename T, typename ptr_t>
ptr_t search(ptr_t first, ptr_t last, T key) {
    while(first != last && *first != key) //prefer this
    {
        ++first;
        // first += 1 NO
    }
    return first;
}

template <typename ptr_t, typename unary_fn_t>
ptr_t search_if(ptr_t first, ptr_t last, unary_fn_t fn) {
    while(first != last && !fn(*first)) //prefer this
    {
        ++first;
        // first += 1 NO
    }
    return first;
}

bool is_odd(int x) {
    return x % 2 == 1;
}

bool is_square(int x) {
    int i = 1;
    while (i * i < x) {
        ++i;
    }
    return i * i == x;
}

#if 0
int* search(int* first, int* last, bool (*fn)(int)) {
    while(first != last && !fn(*first))
    {
        ++first;
        // first += 1 NO
    }
    return first;
}
#endif

int main() {
    int a[] = {2, 4, 8, 16, 21};
    int* res;

    res = search_if(a, a + 5, is_odd);
    if (res == a + 5) {
        cout << "Not found" << endl;
    }
    else {
        cout << "found: " << *res << endl;
    }

    res = search_if(a, a + 5, is_square);
    if (res == a + 5) {
        cout << "Not found" << endl;
    }
    else {
        cout << "found: " << *res << endl;
    }
}