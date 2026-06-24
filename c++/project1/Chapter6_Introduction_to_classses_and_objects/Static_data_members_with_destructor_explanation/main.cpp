//Static Data members with destructor explanation
#include<iostream>
using namespace std; // Using the standard namespace
class X {
    static int count; // Static variable to count the number of objects
    int id;  // Instance variable to store unique ID for each object 

public:
X(){
    count++; // Increment the count when a new object is created
    id = count; // Asign a unique ID to the object
}
~X() {
    count--; // Decrement the count when an object is destroyed
    cout << "\nDestroying ID number = " << id;
}
}
static void display_count(){
    cout << "\nCurrent object count: " << count;
void showid(){
    cout << "\nObject ID: " << id;
}
}; // Define the static variable outside the class
int X::count = 0;
int main() {
    X::display_count(); // Display count before any object is created
    X x1, x2; // Create two objects of class X
    X::display_count(); // Display count after objects are created
    x1.showid();   // Show ID of x1
    x2.showid();   // Show ID of x2

    return 0;
}



