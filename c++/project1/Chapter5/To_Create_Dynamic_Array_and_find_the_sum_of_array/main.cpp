//Create a dynamic Array, and Find the Sum of Array Elements
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    int * ptr;

    cout << "Enter the size of the array:" << endl;
    cin >> n;
    ptr = new int[n]; // dynamically allocate memory for array
    cout << "Enter" << n << "numbers: ";

    for (int i = 0; i < n; i++){
        cin >> ptr[i];
        sum = sum +ptr[i];
    }
    cout << "Sum = " << sum << endl;

    delete[] ptr; // properply deallocate memory
    // cin.get(); // If you want to pause the program to see the output
    return 0;
}