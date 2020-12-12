#include <iostream>
#include <ctime>

int main() {
setlocale(LC_ALL, "Russian");

srand(time(0));  
int arr[10] = {};
int Size = 0;
int biggestNum = 0;
int max;

printf ("%s", "Введите номер(от 0 до 10): ");
scanf_s ("%d", &Size);
                    if (Size > 10 || Size < 0){
                        printf ("Error");
                        return 0;
                    }

printf ("%s", "Введите больший номер (от 0 до 30): ");
scanf ("%d", &biggestNum);
                    if (biggestNum > 30 || biggestNum < 0){
                        printf ("Error");
                        return 0;
                    }
printf ("%s", "Ваш массив: ");
for (int numEl = 0; numEl < Size; numEl++){
    arr[numEl] = 1+ rand()%biggestNum;
    printf ("%d ", arr[numEl] );
}
    for (int numEl = 0; numEl < Size; numEl++){
        if (numEl % 2 != 0 && arr[numEl] % 3 == 0){
            max = arr[numEl];
            if (arr[numEl] > max) {
                max = arr[numEl];
            }
        }

    }
    printf ("\n%s%d", "Самое большое число, которое делится на 3: ", max);
    return 0;
}