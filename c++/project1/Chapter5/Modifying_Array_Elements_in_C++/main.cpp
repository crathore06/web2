//Modifying Array Elements in C++
#include<iostream>
using namespace std;
int main(){
    //Initialize an array with 5 elements
    int arr[5] = {10, 20, 30, 40, 50};

    //Display the original array
    cout << "Original array: ";

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //Modify the third element (index 2)
    arr[2] = 100;

    //Modify the first element (index 0)
    arr[0] = 500;

    cout << "Modify array: ";

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0; 
}