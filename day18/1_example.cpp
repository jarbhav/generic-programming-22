#include<iostream>
using namespace std;

#if 0
int acc1(int *first, int *last)
{
    int init = 0;
    while(first != last)
    {
        init += *first;
        ++first;
    }
    return init;
}
#endif

#if 0
template<typename T, typename ptr_t>
T acc1(ptr_t first, ptr_t last)
{
    T init = T();   //Call to default ctor
    /*
    int() => 0
    double() => 0
    */
    while(first != last)
    {
        init += *first;
        ++first;
    }
    return init;
}
#endif

#if 0
//By adding init as a parameter we can have implicit instantiation
template<typename T, typename ptr_t>
T acc2(ptr_t first, ptr_t last, T init)
{
    while(first != last)
    {
        init += *first;
        ++first;
    }
    return init;
}
#endif

#if 1
/*
Callback based on pointer to function
    We can't make out which function is being called back at compile time
    Function call cannot be inlined

    callback is based on a pointer and it does not have any attributes
    no state
*/
template<typename T, typename ptr_t, typename op_t>
T acc3(ptr_t first, ptr_t last, T init, op_t op)
{
    while(first != last)
    {
        init = op(init,*first);
        ++first;
    }
    return init;
}
int add(int x, int y)   { return x + y; }
int mul(int x, int y)   { return x * y; }
int max(int x, int y)   { return (x > y) ? x : y; }

#endif

//---------------------------------------------------------------------------------//

int main()
{
    #if 0
    int a[] = {3, 1, 5, 2, 4};
    cout << "Sum: " << acc1(a, a+5) << endl;
    double b[] = {3.3, 1.1, 5.5, 2.2, 4.4};
    cout << "Sum: " << acc1(b, b+5) << endl;
    #endif

#if 0
    //Only way of instantiation : Explicit
    //Else It won't be able to determine T
    int a[] = {3, 1, 5, 2, 4};
    cout << "Sum: " << acc1<int, int*>(a, a+5) << endl;
    double b[] = {3.3, 1.1, 5.5, 2.2, 4.4};
    cout << "Sum: " << acc1<double, double*>(b, b+5) << endl;


    //Combination of implicit and explicit Instantiation
    cout << "Sum: " << acc1<int>(a, a + 5) << endl;
#endif

#if 0
    int a[] = {3, 1, 5, 2, 4};
    cout << "Sum: " << acc2(a, a + 5, 0) << endl;     //15
    cout << "Sum: " << acc2(a, a + 5, 20) << endl;     //35

    double b[] = {3.3, 1.1, 5.5, 2.2, 4.4};
    cout << "Sum: " << acc2(b, b + 5, 0) << endl;     //15  (Take care)
    cout << "Sum: " << acc2(b, b + 5, 0.0) << endl;   //16.5
#endif

#if 1
    int a[] = {3, 1, 5, 2, 4};
    cout << "Sum: " << acc3(a, a + 5, 0, add) << endl;
    cout << "Product: " << acc3(a, a + 5, 1, mul) << endl;    
    cout << "Max: " << acc3(a + 1, a + 5, a[0], max) << endl;
#endif
}   