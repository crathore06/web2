//Calculate the total cost of an item
#include<iostream>
using namespace std;
int main(){ 
    int sum;
    int item_price = 400;
    int shipping_cost = 300;

    sum = item_price + shipping_cost;
    cout << "total cost is :" << sum << endl;
    return 0;
}