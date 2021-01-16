#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int itemNum = 0; // Номер элемента
    int buf = 0; // Буфер
    int *ptrArr = new int[10]; // Массив

    //Заполнение и вывод массива
    for(int i = 0; i < 10; i++){
        ptrArr[i] = 1 + rand() % 25;
    }
    for(int i = 0; i < 10; i++){
        printf ("%d:", i);
        printf("%d ", ptrArr[i]);
    }

    printf("\n");

    //Задаем значение элемента
    cout << "Please, input item number";
    cin >> itemNum;

    //Поиск и удаление
    for (int i = itemNum; i < 10; i++) {
        ptrArr[i] = ptrArr[i+1];
    }

    for(int i = 0; i < 9; i++){
        printf ("%d:", i);
        printf("%d ", ptrArr[i]);
    }
    printf("\n");

    delete[] ptrArr;

    return 0;
}