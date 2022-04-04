/*
Vaibhav Raj
PES1UG19CS554
*/

#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

template<class T>
class IteratorRange {
public:
    IteratorRange(T first, T last) : first(first), last(last) {}

    T begin() {
        return this->first;
    }
    
    T end() {
        return this->last;
    }
private:
    T first;
    T last;
};

template<class T, class X, class Z>
class filter {
public:
    filter(T range, X func) : range(range), predicate(func), itr_(range.begin()) {}

    Z begin() {
        return this->range.begin();
    }

    Z end() {
        return this->range.end();
    }

    filter& operator++() {
        if (predicate(*itr_)) {
            ++itr_;
        }
        while(!predicate(*itr_)) {
            ++itr_;
        }
        return *this;
    }

    friend ostream& operator<<(ostream& o, const filter& f) {
        return o << *f.itr_ << '\n'; 
    }

private:
    T range;
    X predicate;
    Z itr_;
};

// Define more predicates here
bool is_even(int x) {
    return x % 2 == 0;
}


int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    IteratorRange<vector<int>::iterator> range(v.begin(), v.end());

    filter<IteratorRange<vector<int>::iterator>, bool (*)(int), vector<int>::iterator> f(range, is_even);

    // Print out the even numbers (according to the predicate function)
    // Using overloaded ++ operator
    cout << ++f;
    cout << ++f;
    cout << ++f;
    cout << ++f;
    cout << ++f;

    //Functionality of filter.begin() and filter.end()
    for (auto itr = f.begin(); itr != f.end(); ++itr) {
        cout << *itr << " ";
    }
}