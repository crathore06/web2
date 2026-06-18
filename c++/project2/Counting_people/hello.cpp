//Counting People
#include<iostream>
using namespace std;
int main(){
    int peopleInRoom = 0;
    cout << "People in room: " << peopleInRoom << endl;

    peopleInRoom++;
    cout << "One person entered. people in room: " << peopleInRoom << endl;

    peopleInRoom++;
    cout << "One person entered. People in room: "<< peopleInRoom << endl;

    peopleInRoom++;
    cout << "One person entered. people in room: "<< peopleInRoom << endl;

    peopleInRoom--;
    cout << "One person left. People in room: "<< peopleInRoom << endl;
    return 0;
}