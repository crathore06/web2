// Matrix Addition Program
#include<iostream>
using namespace std;
int main(){
    //main should return int, not void
    int a[2][3],b[2][3],c[2][3];
    int i,j;
    cout << "ENter the elements for the first 2x3 metrics: \n";
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements for the second 2x3 matrix:\n";

    for (i=0; i < 2; i++){
        for (j = 0; j < 3; j++){
            cin >> b[i][j];
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The resultant matrix is: \n";
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            cout << c[i][j] << " "; // Use proper quotes
        }
        cout << endl;
    }
    return 0; // return 0 in main
}