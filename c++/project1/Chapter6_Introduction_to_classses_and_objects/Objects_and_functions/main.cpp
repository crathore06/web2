//Object and Functions
#include<iostream>
using namespace std;
class Distance
{
    private:
    int feet;
    int inches;

    public:
    void setDistance (int c, int d)
    {
        feet = c;
        inches = d;
    }
    void printDistance ()
    {
        cout << feet << " ft " << inches << " inches " << endl;
    }
    void addDist(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if (inches >= 12)
        {
            feet = feet + 1; // Increment feet
            inches = inches - 12; // Convert extra inches
        }
    }
};
int main()
{
    Distance D1, D2, D3;

    D1.setDistance(10,2);
    D2.setDistance(2,4);
    D3.addDist(D1,D2);

    D3.printDistance();

    return 0;
}

