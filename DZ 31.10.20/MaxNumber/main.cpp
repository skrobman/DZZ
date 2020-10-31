#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

    int n = 0, max = 0;

    cout << "Ваше число -> ";
    cin >> n;

    while (n>0){ // Цикл выполняется, пока число больше нуля
        if(n%10 > max){
            max = n%10; // записываем значение в переменную мах
        }
        n/=10; // отбрасываем последние число, чтобы сравнить другие числа
    }
    
    cout << "Наибольшаяя цифра -> " << max << endl;
    return 0;

}