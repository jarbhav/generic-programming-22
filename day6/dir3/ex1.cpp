#include <iostream>
using namespace std;

#include <cstring> // for the last case of matching strings

// Except for types these two function are same
/*
int sq (int x) {
    return x * x;
}

double sq(double x) {
    return x * x;
}
*/

// can the compiler generate code for different types given a skeletal code
// Answer : TEMPLATES

template<typename T>            //This template handles both the cases
T sq(T x) {                     // For int as well as double
    return x * x;
}
/*
Instantiation:    
    Create the function(in some meta form) based on the call
        1. Implicit instantiation
            Compiler deduces the type of parameter based on 
            matching of arguments to parameters

            - Compile time mechanism
            - results in overloaded functions
        
        2. Explicit instantiation
            Specify the types in the call

*/
#if 0
bool eq(int a, int b) {
    return a == b;
} 
#endif

template<typename T>
bool eq(T a, T b) {
    return a == b;
}

// Specialization for enforcing value semantics
// in case of matching two strings
template<>
bool eq(char *a, char *b) {
    return strcmp(a, b) == 0;
}

int main() {
    cout << sq(10) << '\n';
    cout << sq(2.5) << '\n';    // 4 because standard conversion happens
                                // 6.25 when we define the second sq function
    cout << sq(5) << '\n';
    cout << sq(2.5f) << '\n';

    cout << boolalpha;
    cout << eq(65, 65) << '\n';
    cout << eq('A', 'A') << '\n';

    //cout << eq(65, 'A') << '\n';    // No match(conflict in types) - compile error

    // Specifying a list of types to match the list of typenames 
    // in the template definition
    cout << eq<int>(65, 'A') << '\n';   // Promotion happens
                                        // because we do explicit instantiation 
                                        // by providing types in the call
    cout << "String Case: " << endl;
    char a[] = "pes";
    char b[] = "pes";
    cout << eq(a, b) << '\n';           // reference semantics : false;
                                        // because a, b point to diff locations

                                        // value semantics : true;
}