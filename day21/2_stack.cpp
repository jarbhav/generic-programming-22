#include<iostream>
using namespace std;

template<typename T>
class Stack
{
    public:
    explicit Stack(int n);
    ~Stack();
    Stack<T>& operator=(const Stack<T>&) = delete;
    Stack(const Stack<T>&) = delete;
    void push(T key);
    T pop();

    private:
    T *p_;
    int n_;
    T *sp_;
};

/*
Type T should support:
    default ctor
*/
template<typename T>
Stack<T>::Stack(int n)
: p_(new T[n]), n_(n)
{
    sp_ = p_;
}

/*
Type T should support:
    dtor
*/
template<typename T>
Stack<T>::~Stack()
{
    delete [] p_;
}

/*
Type T should support:
    assignment
*/
template<typename T>
void Stack<T>::push(T key)
{
    *sp_++ = key;
}

/*
Type Q should support:
    copy ctor
*/
template<typename Q>
Q Stack<Q>::pop()
{
    Q key = *--sp_;     //copy ctor call
    return key;         //copy ctor call
}

class Number
{
    private:
    int val_;

    public:
    Number(int val = 0) : val_(val) { }
    /*
    We have to provide a default ctor because we are creating an array of objects
    */
    friend ostream& operator<<(ostream& o, const Number& x);
};

ostream& operator<<(ostream& o, const Number& x)
{
    return o << x.val_;
}

int main()
{
#if 0
    /*
    Two ways of instantiation
        explicit instantiation
        default type parameters
    */
    Stack<int> s(10);   //explicit instantiation
    s.push(111);
    s.push(222);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
#endif

#if 0
    Stack<double> s(10);
    s.push(11.1);
    s.push(22.2);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
#endif

#if 1
    Stack<Number> s(10);
    s.push(11);
    s.push(22);

    cout << s.pop() << endl;
    cout << s.pop() << endl;

    /*
    There is a problem in creating the stack 
    if we don't specify a default ctor
    Since we are making an arary of objects dynamically
    it uses a list of ctor calls to do so

    Push expects an object of type Number
    but it doesn't match exactly, it finds that 
    there is a single aargument ctor using which 
    it can convert int to Number.
    So we have no errors with push

    Put to operator (<<) expects right operand to be an object of class Number
    What we get is also the same and there is a way to display it
    So we have no issue with <<

    Pop returns an object of the class so we have no issue
    */
#endif

}