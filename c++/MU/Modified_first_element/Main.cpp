// Access different element of an array
#include<iostream>
using namespace std;
int main(){
    string fruit[4] = {"Apple","Banana","Orange","Grapes"};
    cout << "First fruit: " << fruit[0] << endl;
    fruit[0] = "Mango";
    cout << "Modified first fruit: " << fruit[0] << endl;
    return 0;
}
//NOTE: uncomment the below line to enable whitebox test case