#include <iostream>

using namespace std;

int cycle(int n);
void output(int max);

int main(){
    setlocale(LC_ALL, "Russian");

    int n = 0;

    cout << "Ваше число -> ";
    cin >> n;

//    while (n>0){ // Цикл выполняется, пока число больше нуля
//        if(n%10 > max){
//            max = n%10; // записываем значение в переменную мах
//            }
//            n/=10; // отбрасываем последние число, чтобы сравнить другие числа
//       }   

//    cycle(n);

    output(cycle(n));
    return 0;

}

int cycle(int n){
    int max = 0;
   while (n>0){ // Цикл выполняется, пока число больше нуля
       if(n%10 > max){
           max = n%10; // записываем значение в переменную мах
        }
        n/=10; // отбрасываем последние число, чтобы сравнить другие числа
    }
    return max;

}

void output(int max){
    cout << "Наибольшаяя цифра -> " << max << endl;    

}