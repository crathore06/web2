//Sum of array element 
#include<iostream>
using namespace std;
int main(){
    // Return type should be int
    int i,sum = 0;
    int a[10] = {1,2,3,4,6,9,2,8,5,10}; // Array with size 10
    for (i = 0; i < 10; i++) {
        sum = sum + a[i];
    }
    // Display the result
    cout << "\nSum of values of an array is = " << sum << endl;
    return 0; // Return statement
}