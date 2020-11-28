#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n=0, num = 0;
    cout << "Размер массива -> ";
    cin >>n;
    int arr[n];

    cout << "Заполните массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " элемент массива -> ";
        cin >> arr[i];
    }

    cout << "Введите искомое число: ";
    cin >> num;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = true;
            break; // остановка программы
        }
    }
 
    if (found == true)
    {
        cout << "Число -> " << num << " есть в массиве!" << endl;
    }
    else
    {
        cout << "Число -> " << num << " нет в массиве!" << endl;
    }
    return 0;
}