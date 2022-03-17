#include<iostream>
#include "list.h"
using namespace std;

list::list()
: head_(nullptr)
{

}

void list::add(int key)
{
    Node* temp = new Node(key);
    temp->link_ = head_;
    head_ = temp;
}

void list::disp() const
{
    Node* temp(head_);
    while(temp)
    {
        cout << temp->key_ << '\t';
        temp = temp->link_;
    }
    cout << endl;
}