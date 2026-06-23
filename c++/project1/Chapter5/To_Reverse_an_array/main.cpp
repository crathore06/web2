//Reversing an array [1,2,3]-> [3,2,1]
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3}; // Example arrray
    int n = 3; // Size of the array
    // Loop to reverse the array
    for (int i = 0; i < n/2; i++){
        int temp = arr[i]; // Store the current element in temp
        arr[i] = arr[n - i - 1]; // Swap the current element with the corresponding element from the end
        arr [n - i - 1] = temp; // Swap the current element with the corresponding element from the end
        arr [n - i - 1] = temp; //Asign the value from temp to the corresponding element from the end
    }
    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
}