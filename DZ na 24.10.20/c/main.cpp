#include<iostream>
using namespace std;

int main()
{
    float day = 10, sum = 0, n = 0; // sum - переменная. в которой хранится сумма дней за опред. промежуток
    
    cout << "Введите количество дней" << endl;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        if(i != 0) // пока i > 0, цикл выполняется
            day += day*0.1;
        if(i <= n) // Если программа находит n количество чисел, то складывает их и записывает в переменную sum
            sum +=day;
    }
     cout << "Суммарный пробег за n дней: " << sum << "км." << endl;
    return 0;
}