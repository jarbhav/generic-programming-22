#include<iostream>
using namespace std;
#include "date.h"

ostream& operator<<(ostream&o, const date& d) {
    return o << d.dd_ << "-" << d.mm_ << "-" << d.yy_ << "\n";
} 

bool operator<(const date& l, const date& r) {
    if (r.yy_ < l.yy_) 
        return false;
    if (r.yy_ == l.yy_ && r.mm_ < l.mm_)
        return false;
    if (r.yy_ == l.yy_ && r.mm_ == l.mm_ && r.dd_ < l.dd_)
        return false;
    return true;
}