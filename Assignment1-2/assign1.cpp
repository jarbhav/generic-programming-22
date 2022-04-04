/*
Vaibhav Raj
PES1UG19CS554
*/

#include <iostream>
#include <forward_list>
#include <list>
#include <vector>
using namespace std;

// Function to find the quartile ranges of a forward list
void findQuartileForwardIterator(forward_list<int>& f_list) {
    auto q1 = f_list.begin();
    auto q2 = f_list.begin();
    auto q3 = f_list.begin();
    auto q4 = f_list.begin();

    while(q4 != f_list.end()) {
        ++q1;
        ++(++q2);
        ++(++(++q3));
        ++(++(++(++q4)));
    }

    auto it = f_list.begin();
    cout << "First Quartile Range:" << endl;
    for (it; it != q1; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Second Quartile Range:" << endl;
    for (it; it != q2; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Third Quartile Range:" << endl;
    for (it; it != q3; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Fourth Quartile Range:" << endl;
    for (it; it != q4; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Function to find the quartile ranges of a list
void findQuartileList(list<int>& l_list) {
    auto q1 = l_list.begin();
    auto q2 = l_list.begin();
    auto q2_back = l_list.end();
    auto q3 = l_list.end();

    while(q2 != q2_back) {
        ++q1;
        ++(++q2);
        --(--q2_back);
        --q3;
    }

    auto it = l_list.begin();
    cout << "First Quartile Range:" << endl;
    for (it; it != q1; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Second Quartile Range:" << endl;
    for (it; it != q2_back; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Third Quartile Range:" << endl;
    for (it; it != q3; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Fourth Quartile Range:" << endl;
    for (it; it != l_list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
void findQuartileVector(vector<int>& v) {
    // Finding the size of the list
    int n = v.size();

    // Printing the ranges
    auto it = v.begin();
    cout << "First Quartile Range: " << endl;
    while (it < v.begin() + n/4) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;

    cout << "Second Quartile Range: " << endl;
    while (it < v.begin() + n/2) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
    
    cout << "Third Quartile Range: " << endl;
    while (it < v.begin() + 3*n/4) {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << "Fourth Quartile Range: " << endl;
    while (it != v.end()) {
        cout << *it << " ";
        it++;
    }
    cout << endl; 
}

int main () {
    
    cout << "Using Forward list: " << endl;
    // Forward Iterator Approach
    forward_list<int> f_list;

    for(int i = 100; i > 0; --i) {
        f_list.push_front(i);
    }

    findQuartileForwardIterator (f_list);

    cout << "\nUsing list: " << endl;
    // Bidirectional Iterator Approach
    list<int> l_list;

    for(int i = 1; i < 101; ++i) {
        l_list.push_back(i);
    }

    findQuartileList(l_list);

    cout << "\nUsing Vector: " << endl;
    // Random Iterator Approach
    vector<int> vec;

    for(int i = 1; i < 101; ++i) {
        vec.push_back(i);
    }

    findQuartileVector(vec);
}