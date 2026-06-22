//Sort an array 
#include<iostream>
using namespace std;
int main(){
    int a[10],temp;
    //Input 10 elements into the array
    cout << "Enter 10 elements for the array: " << endl;
    for (int i =0; i < 10; i++){
        cin >> a[i];
    }
    // Bubble sort to sort the array in ascending order
    for (int j = 0; j < 9; j++){
        for (int i = 0; i < 9 - j; i++){
            if(a[i] > a[i + 1]){
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    // Output the sorted array
    cout << "Array after sorting is: " << endl;
    for (int i = 0; i < 10; i++){
        cout << a[i] << endl;
    }
    return 0; 
}