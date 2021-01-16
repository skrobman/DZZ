#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int oddNumbers = 0; //Нечетные числа
    int buf = 0; // Буфер
    int *ptrArr = new int[10]; // Массив
    int *ptrArrII = new int[10]; // Массив

    //Заполнение и вывод массива
    for(int i = 0; i < 10; i++){
        ptrArr[i] = 1 + rand() % 25;
    }
    for(int i = 0; i < 10; i++){
        printf ("%d:", i);
        printf("%d ", ptrArr[i]);
        if(ptrArr[i]%2!=0){
            oddNumbers+=1;
        }
    }

    printf("\n");


    //Поиск и удаление
    for (int i = oddNumbers; i < 10; i++) {
        if ((ptrArr[i]%2)==0) {
            ptrArrII[buf]=ptrArr[i];
            buf++;
        }
    }

    for(int i = 0; i < 10-oddNumbers; i++){
        printf ("%d:", i);
        printf("%d ", ptrArr[i]);
    }
    printf("\n");

    delete[] ptrArr;
    delete[] ptrArrII;

    return 0;
}