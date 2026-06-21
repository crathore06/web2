//Dynamically allocate memory for an array of 10 integers
#include<iostream>
#include<new>  // Required for std::nothrow

int main()
{
    //Dynamically allocate memory for an array of 10 integers
    int *arr = new (std::nothrow) int[10];
    // Check if the allocation was successful
    if (!arr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1; // Exit the program with an error code
    }
    // Initialize the array
    for (int i = 0; i < 10; ++i){
        arr[i] = i * 10; // Assign values to each element
    }
    // Print the array
    for(int i = 0; i < 10; ++i) {
        std::cout << "arr["<<i<<"]="<<arr[i]<<std::endl;
    }
    //Deallocate the memory 
    delete[] arr;
    return 0; //Exit the program successfully
}