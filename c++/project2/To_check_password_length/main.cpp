//To check password length is long enough
#include<iostream>
using namespace std;
int main(){ 
    int passwordLength = 5;
    cout << (passwordLength >= 8) << endl;
    cout << (passwordLength < 8) << endl;
    return 0;
}