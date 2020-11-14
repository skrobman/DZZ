#include <iostream>

int main(){

    setlocale(LC_ALL, "Russian");

    int array[10] = {};


    for(int i=0; i <= 10; i++) {
        if (i % 2 == 0) {
        array[i] = 0;
        }
        else{
        array[i] = 1;
        }
    }

    for(int i=0; i <= 10; i++){
        printf("%d ", array[i]);
    }

}