// Searching for an element
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30}; // Example array
    int target = 20; // Element to search for
    bool found = false; // flag indicate if element is found
    // loop through array to search for the target element
    for (int i = 0; i < 3; i++ ){
        if (arr[i] == target){
            // check if current element matches the target
            found = true; //Set the flag to true if found
            break; // Exit the loop as the element is found
        }
    }
    // Display whether the element was found or not 
    if (found){
        cout << "Element found!" << endl;
    } else{
        cout << "Element not found!" << endl;
    }
    return 0; 
}