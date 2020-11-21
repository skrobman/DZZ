#include <iostream>

int main(){

    setlocale(LC_ALL, "Russian");

    float array[10] = {};


    for(int i=0; i <= 10; i++) {
        if (i&1) {
        array[i] = 1;
        }
        else{
        array[i] = i%5;
        }
    }

    for(int i=0; i <= 10; i++){
        printf("%d ", array[i]);
    }

}