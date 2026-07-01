// Sum and avg of array
#include<iostream>
using namespace std;
int main(){
    int nums[10] = {5, 6, 7, 8, 4, 1, 3, 2, 4, 9};
    double sum = 0;
    double avg = 0;
    cout << "The integers are: ";
    for (int i = 0; i < 10; ++i){
        cout << nums[i] << " ";
    }
    for (int i = 0; i < 10; i++){
        sum += nums[i];
    }
    avg = sum / 10;
    cout << endl << "Sum = " << sum;
    cout << endl << "Average = " << avg;
    cout << endl;
    return 0;
}