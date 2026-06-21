// Manipulation of 1D array elements
#include<iostream>
using namespace std;
int main(){
    int arr[7] = {10,20,30,40,55,60,70}; // Initialise the array with 7 elements

    // Display the 5th element before updating
    cout << "5th value of array before updation: \n" << arr[4];

    //Update the 5th element (index 4) to a new value 
    arr[4] = 50;
    cout << "\n 5th value of array after updation: \n" << arr[4] << endl;

    cout << "The array elements are: \n";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}