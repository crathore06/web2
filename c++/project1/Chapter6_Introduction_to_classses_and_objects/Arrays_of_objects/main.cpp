//Array of objects
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;
    public:
    void setDistance(int f, int i){
        feet = f;
        inches = i;
    }
    void display(){
        cout << feet << " ft " << inches << " inches " << endl;
    } 
};
int main(){
    Distance d[3]; // Array of 3 Distance objects

    // Setting values for each object in the array
    d[0].setDistance(5,8);
    d[1].setDistance(6,2);
    d[2].setDistance(7,10);

    // Displaying values
    d[0].display();
    d[1].display();
    d[2].display();

    return 0;
}