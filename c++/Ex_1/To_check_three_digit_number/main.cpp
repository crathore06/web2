// To check 3 digit numbers
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "ENter teh number : ";
    cin >> num;

    if(num>=100 & num<=1000 || num<=-100 & num>=-1000){
        cout << "3 digit number";
    }
    else {
        cout << "Not a 3 digit number";
    }
    return 0;
}