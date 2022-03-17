#ifndef SERVER_H
#define SERVER_H

//always define template functions in header file
//they won't work otherwise linker won't be able to find it
template<typename T>
void foo(T t) {
    cout << t << endl;
}
#endif