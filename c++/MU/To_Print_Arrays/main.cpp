// To print arrays
#include<iostream>
using namespace std;
int main(){
    int n;
    int values[5];
    cout << "ENter integer " << endl;
    for (int i = 0; i<5; ++i){
        cin >> values[i];
    }
    cout << "The integers are: ";
    for (int i = 0; i<5; ++i){
        cout << values[i] << " ";
    }
    cout << endl;
    return 0;
}