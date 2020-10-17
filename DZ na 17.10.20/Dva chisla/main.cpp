#include<iostream>

using namespace std;

int main(){
    int var = 0, var1 = 0;
    cout <<"Input first number: " << endl;
    cin >> var;
    cout <<"Input number two: " << endl;
    cin >> var1;

    if (var - var1 >= 30){
        cout <<"Yes" << endl;
    }
    else if (var1 - var >= 30){
        cout <<"Yes" << endl;
    }
    else{
        cout <<"No" << endl;
    }
    return 0;
}