#include <iostream>
#include <ctime>

using namespace std;

int main(){


    int k = 0;
    int n = 0;
    int userNumber = 0;

    cout << "Please, input number of attempts ";
    cin >> k;

    cout << "Please, input amount of numbers ";
    cin >> n;


    for(int i = 0 ; i < k ; i++){

        srand(time(0));
        int computerNumber = rand() % n;
        cout << computerNumber;
        cout <<endl;

        cout << "Please, input your number ";
        cin >> userNumber;

        if(userNumber == computerNumber){
            cout << "You win";
            break;
        }

        else if(userNumber < computerNumber){
            cout << "You lose(Your number < Computer number)";
            cout <<endl;
        }

        else if(userNumber > computerNumber){
            cout << "You lose(Your number > Computer number)";
            cout <<endl;
        }
    }

    return 0;

}