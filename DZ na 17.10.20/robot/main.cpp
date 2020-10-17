#include <iostream>

using namespace std;

int main() {
 int var= 0; int directionOne = 0; int directionTwo = 0; int directionThree = 0;

 cout << "Vyberite storony sveta: 11 for North, 12 for West, 13 for South, 14 for East: ";
 cin >> var;
    if (var !=11 && var != 12 && var !=13 && var != 14) {
     cout << "Oshybka!" << endl;
     return 0;
    }

    cout << "Vyberite kommandy: 0 for straight, -1 for right, 1 for left(Tri komandy): " << endl;
    cin >> directionOne;

        if (directionOne != 0 && directionOne != 1 && directionOne != -1) {
        cout << "Oshybka!" << endl;
        return 0;
        }
    cin >> directionTwo;

        if (directionTwo != 0 && directionTwo != 1 && directionTwo != -1) {
        cout << "Oshybka!" << endl;
        return 0;
        }

    cin >> directionThree;

        if (directionThree != 0 && directionThree != 1 && directionThree != -1) {
        cout << "Oshybka!" << endl;
        return 0;
        }
        
    if (var + directionOne + directionTwo + directionThree == 11) {
        cout << "You are going to the North" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 12) {
        cout << "You are going to the West" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 13) {
        cout << "You are going to the South" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 14) {
        cout << "You are going to the East" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 8) {
        cout << "You are going to the West" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 17) {
        cout << "You are going to the South" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 9) {
        cout << "You are going to the South" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 10) {
        cout << "You are going to the East" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 15) {
        cout << "You are going to the North" << endl;
    }
    if (var + directionOne + directionTwo + directionThree == 16) {
        cout << "You are going to the West" << endl;
    }

    return 0;
}