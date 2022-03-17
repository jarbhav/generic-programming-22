#include<iostream>
using namespace std;

#if 1

// Here we are doing callback
// based on an object of the functor class
/*
    Compiler can deduce which fn is getting called; thus code can be inlined
    Object of a class can have state which could influence behaviour
*/
template<typename T, typename ptr_t, typename op_t>
T acc3(ptr_t first, ptr_t last, T init, op_t op)
{
    while(first != last)
    {
        init = op(init, *first);    //op.operator()(init, *first) in 2nd case
        ++first;
    }
    return init;
}
int add(int x, int y)   { return x + y; }
class Add
{
    public:
    int operator()(int x, int y) { return x + y; }
};

#endif

//---------------------------------------------------------------------------------//

int main()
{

#if 1
    int a[] = {3, 1, 5, 2, 4};
    cout << "Sum: " << acc3(a, a + 5, 0, add) << endl;
    cout << "Sum: " << acc3(a, a + 5, 0, Add()) << endl;
#endif
}   