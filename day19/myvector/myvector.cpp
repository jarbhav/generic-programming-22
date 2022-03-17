#include <iostream>
using namespace std;
#include "myvector.h"

myvector::myvector(int n)
: n_(n), p_(new int[n])
{
    for (int i = 0; i < n_; ++i)
    {
        p_[i] = i * i * i;
    }
}

myvector::~myvector()
{
    delete [] p_;
}
