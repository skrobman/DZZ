#include <iostream>

using namespace std;

int main(){
    int var = 0;
    cout << "Input var " << endl;
    cin >> var;

    if (var > -10 && var < 10){
        cout << "done" << endl;
    }

    return 0;
}