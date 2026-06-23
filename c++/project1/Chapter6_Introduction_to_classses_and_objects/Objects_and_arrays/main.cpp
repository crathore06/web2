//Object and Arrays
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    float inches;

    public:
    void getdist(){
        //Input length from user
        cout << "Enter feet:";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void printdist() {
        //print the distance
        cout << feet << "' -" << inches << "\"" << endl;
    }
};
int main(){
    Distance D[50]; // Array of Distance objects
    int count = 0; // Count the entries
    char res;  // Response of user (y or n)
    cout << endl;
    do {
        cout << "Enter the value of distance: " << count + 1 << endl;
        D[count++].getdist(); // Store distance in array 
        cout << "Do you want to enter another distance (y/n)?: ";
        cin >> res;
    } while (res != 'n' && res != 'N');
    for (int j = 0; j < count; j++) {
        cout << "\nDistance number" << j + 1 << " is ";
        D[j].printdist();
    }
    cout << endl;
    return 0;
    }
