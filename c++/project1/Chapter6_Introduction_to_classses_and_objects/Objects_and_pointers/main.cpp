//Object and pointers
#include<iostream>
using namespace std;
class Distance {
    private :
    int feet;
    float inches;

    public :
    void getdist (){
        // input length from user
        cout << "Enter feet : \n";
        cin >> feet;
        cout << "Enter inches : \n";
        cin >> inches ;
    }
    void printdist(){
        //print the distance
        cout << feet << "'-" << inches << "\"" << endl;
    }
};
int main() {
    Distance D; // Define a named Distance object
    D.getdist();
    D.printdist();
    Distance * dptr; // Pointer to Distance class
    dptr = new Distance; // Points to new Distance object
    dptr->getdist(); //Access new object members
    dptr->printdist();
    delete dptr; // Free dynamically allocated memory

    return 0;
}


