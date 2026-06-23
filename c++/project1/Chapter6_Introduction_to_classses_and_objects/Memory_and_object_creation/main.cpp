// Memory and object creation
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;

    public:
    void setdistance (int c, int d)
    {
        feet = c;
        inches = d;
    }
    void printdistance ()
    {
        cout << feet << "ft" << inches << "inches" << endl;
    }
};
int main(){
    Distance d1;
    d1. setdistance (10,2);
    d1. printdistance();

    return 0; // standard practice in c++
}