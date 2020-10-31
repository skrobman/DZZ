#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int n;

    cout<< "Ваше число -> ";
    cin >> n;

    if (n < 2) {
        cout << n << " - это число меньше двух";
        return 0;
    }
    for (int i = 2; i*i <= n; ++i) { // цикл который проверяет дилится ли число на четное
        if (n % i == 0) { // Если делится на четное число
            cout << n << " - не является простым";
            return 0;
        }
    }
    cout << n << " - простое";
    return 0;
}