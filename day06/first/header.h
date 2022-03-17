#ifndef SERVER_H    //include guard
#define SERVER_H

int add2(int num1, int num2);
int add3(int num1, int num2, int num3);

#endif

/*
vaibhav@vaibhav-virtual-machine:~/Desktop/GP$ cd day6
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$ gcc -c client.cpp
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$ gcc -c server.cpp 
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$ nm client.o | grep add
                 U _Z4add2ii
                 U _Z4add3iii
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$ nm server.o | grep add
0000000000000000 T _Z4add2ii
0000000000000018 T _Z4add3iii
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$ g++ client.o server.o
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$ ./a.out 
12
16
vaibhav@vaibhav-virtual-machine:~/Desktop/GP/day6$
*/