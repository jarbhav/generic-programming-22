#include<iostream>
using namespace std;

class Stack
{
    public:
    explicit Stack(int n);
    ~Stack();
    Stack& operator=(const Stack&) = delete;
    Stack(const Stack&) = delete;
    void push(int key);
    int pop();

    private:
    int *p_;    //WON'T CHANGE
    int n_;
    int *sp_;   //Stack pointer
};

Stack::Stack(int n)
: p_(new int[n]), n_(n)
{
    sp_ = p_;
}

Stack::~Stack()
{
    delete [] p_;
}

void Stack::push(int key)
{
    *sp_++ = key;
}

int Stack::pop()
{
    int key = *--sp_;
    return key;
}

int main()
{
    Stack s(10);
    s.push(111);
    s.push(222);
    // cout << s.pop() << '\t' << s.pop() << endl;  undefined behaviour
    // operator<<(operator<<(cout, s.pop()), s.pop())
    // sequence point concept
    
    cout << s.pop() << endl;
    cout << s.pop() << endl;
}