// Manipulation of 1D array elements
#include<iostream>
using namespace std;
int main(){
    int arr[7] = {10,20,30,40,55,60,70}; // Initialise the array with 7 elements

    // Display the 5th element before updating
    cout << "5th value of array before updation: \n" << arr[4];

    //Update the 5th element (index 4) to a new value 
    arr[4] = 50;
    return 0;
}