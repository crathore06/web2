#include<iostream>
using namespace std;
int x = 7;
int main(){
    int x = 15;
    cout << "Local X: " << x << endl;

    cout << "Global X: " << :: x << endl;

    return 0;
}