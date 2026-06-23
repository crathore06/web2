//Abstract Class
#include<iostream>
using namespace std;
class Shape {
// Abstract base class
public:
// Pure virtual function providing an interface 
    virtual int getArea() = 0;
    void setLength(int l) {
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }
protected:
    int length;
    int breadth;
};
// Derived class - Rectangle
class Rectangle : public Shape {
    public:
    int getArea(){
        return length * breadth;
    }
};

// Derived class - Square
class Square : public Shape {
    public:
    int getArea(){
        return length * length;
    }
};
int main(){
    Rectangle rect;
    Square sq;

    rect.setBreadth(5);
    rect.setLength(7);

    //Print the area of the rectangle
    cout << "Area of rectangle is: " << rect.getArea() << endl;

    sq.setLength(5);

    //print the area of the square
    cout << "Area of square is: " << sq.getArea() << endl;

    return 0;
}

