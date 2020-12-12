#include <iostream>
#include <ctime>

int main(){
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int size = rand()%15;
    int arr[size] = {};
    int buf = 0, maxEven = 0, maxOdd = 0, M;

    //Заполнение массива
    for (int i = 0; i < size;i++){
        arr[i] = rand()%15;
    }

    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    //Поиск четного числа
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0)
            if (maxEven == -1)
                maxEven = i;
            else if (arr[i] > arr[maxEven])
                maxEven = i;
    }
    if (maxEven == -1){
        std::cout << "Максимальный четный элемент массива: Не найден\n";
    }
    else{
        std::cout << "Максимальный четный элемент массива: " << arr[maxEven] << std::endl;
    }

    //Поиск нечетного числа
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 != 0)
            if (maxOdd == -1)
                maxOdd = i;
            else if (arr[i] < arr[maxOdd])
                maxOdd = i;
    }
    if (maxOdd == -1){
        std::cout << "Максимальный нечетный элемент массива: Не найден\n";
    }
    else{
        std::cout << "Минимальный нечетный элемент массива: " << arr[maxOdd] << std::endl;
    }

    //Замена чисел 
    if ( (arr[maxEven] % 2 == 0)  && (arr[maxOdd] % 2 != 0))
        {
            M = arr[maxEven];
            arr[maxEven] = arr[maxOdd];
            arr[maxOdd] = M;
        }
        
        else 
        {
            for(int i = 0; i < size; i++)
            arr[i] = 0;
        }
    //Вывод
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }


    return 0;
}
