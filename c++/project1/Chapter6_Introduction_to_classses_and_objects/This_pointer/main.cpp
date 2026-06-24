//This pointer
#include<iostream>
using namespace std;
class Example {
    private:
    int value; // Member variable

    public:
    void setValue(int value) {
        // Function parameter has the same name

        this -> value = value; // 'This ->refers to the member varibale, and 'value' refer to the function parameter
    }
    int getValue(){
        return value;
    }
};
int main (){
    Example obj;

    obj.setValue(50);  // Assigns 50 to 'value'

    cout << "Value: " << obj.getValue() << endl; // output: value: 50

    return 0;
}


