//Const Cast
#include<iostream>
using namespace std;
int main(){
    int value = 42;
    int * ptr = &value;
    const int * constPtr = const_cast < const
    int* > (ptr); 

    const int * constptr = &value;
    int * nonconstptr = const_cast < int * > (constptr);
    *nonconstptr = 24;

    return 0;
}