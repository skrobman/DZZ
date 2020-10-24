#include <iostream>

using namespace std;

int main() { 
    int day = 1; float distance = 10;
    for ( ; day <= 10; day++) {

        for (; distance <= 80; distance = distance * 1.1) {
           cout << day++ << ' ' << "д. : " << ' ' << distance << ' ' << "км. "<<endl;
        }
    }
    cout << "Последний день ↑"<<endl;

    return 0;
}