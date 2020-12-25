#include <iostream>
#include <ctime>


int main() {

    int arr[10][10];
    int max[0];

    //Заполнение массива
    srand(time(0));
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++) {
            arr[i][j] = 1+rand()%20;
        }
    }


    //Вывод массива
    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Поиск наибольшего числа
    for(int i = 0; i < 10; i++){
        max[i] = arr[i][0];
        for(int j = 0; j < 10; j++){
            if(arr[i][j]>max[i]){
                max[i] = arr[i][j];
            }
        }
    }

    //Поиск наименьшего из наибольших
    int minMax = max[0], min;
    for(int i = 0; i < 10; i++){
        if(max[i]<minMax){
            minMax = max[i];
            min = i;
        }
    }

    printf("%d",minMax);
    printf("\n");

    //Обнуление и вывод нового массива
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[min][j] = 0;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

        printf("\n");


    return 0;
}
