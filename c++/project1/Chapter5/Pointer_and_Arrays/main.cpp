//Pointers and arrays
#include<iostream>
using namespace std;
int main(){
    /*
    int * ptr;   // 1. Declaration of pointer
    int P = 5;   // 2. Declaration and inilialisation of variable

    ptr = &P;   // 3. Initialisation (or assignment) of the pointer
    cout << *ptr; // Display the value stored at the address in ptr (which is 5)
    cout << ptr;  // Display the address of the p

    int * A;    // Declaration of a pointer to a integer
    int B[10];  // Declartion of an array of 10 integers
    A = B;      // Pointer A is assigned the address of the first element of array B
    */
   int A[5];  // Array declaration
   int * p;   // Pointer declaration

   p = A;  // Point to the first element of the array
   *p = 10;  // A[0] = 10
   p++;    // Move the pointer to the next element (A[1])

   *p = 20;  // A[1] = 20
   p = &A[1];  // Point to the second element (A[1])
   p++;  // Move the pointer to the third element (A[2])

   *p = 30;  //A[2] = 30
   p = &A[2]; // Point to the third element (A[2])

   // print the first three elements of the array 
   for (int n = 0; n < 3; n++) {
    cout << A[n] << "," ;
   }
    return 0;
}