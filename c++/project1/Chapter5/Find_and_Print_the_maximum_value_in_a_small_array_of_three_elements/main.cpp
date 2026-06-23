//Find and print the maximum value in a small array of three elements
#include<iostream>
using namespace std;
int main(){
    int arr[3] = {10,25,15}; //Array with 3 elements
    int max = arr[0]; //Initialize max with the first elements of the array 
    // Loop through the array starting from the second element
    for(int i = 1; i < 3; i++){
        if (arr[i] > max) {
            // Compare each element with the current max
            max = arr[i]; //If a larger element is found, update max
        }
    }
    cout << "Max: " << max << endl; //Print the maximum value
    return 0; 
}