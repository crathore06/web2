#include<iostream>
using namespace std;
int main(){
    int i = 1 , total = 0;

    while (i < 10){
        total = total + i;
        i++;
        if (i == 5){
            break;
        }
    }
    cout << "total = " << total << endl;
    return 0;
}