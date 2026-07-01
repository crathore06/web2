//NOTE: uncomment the below line to enable whitebox test case 
//#ifndef __CXX_TEST_MAIN__
#include<iostream>
using namespace std;
int main(){
    int numbers[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int a = sizeof(numbers);
    int b = sizeof(numbers[0]);

    cout << "sizeof(numbers)= " << a << endl;
    cout << "sizeof(numbers)= " << b << endl;

    
    cout << "The size of the array is: " << size << endl; 
    return 0;
}
