#include <iostream>

using namespace std;

int main(){
    //Проверка на четные числа
    int var = 0, var1 = 0, var2 = 0, var3 = 0, naib = 0; //naib - переменная, в которую записывается максимальное значение
    cout << "Vvedite chislo1" << endl;
    cin >> var;
    cout << "Vvedite chislo2" << endl;
    cin >> var1;
    cout << "Vvedite chislo3" << endl;
    cin >> var2;
    cout << "Vvedite chislo4" << endl;
    cin >> var3;

    if (var%2 == 0){
        cout << "chislo1 - chetnoe" << endl;
        if (var > naib){
            naib = var;
        }
    }
    else{
        cout << "chislo1 - nechetnoe" << endl;
    }
    
    if (var1%2 == 0){
        cout << "chislo2 - chetnoe" << endl;
        if (var1 > naib){
            naib = var1;
        }
    }
    else{
        cout << "chislo2 - nechetnoe" << endl;
    }

    if (var2%2 == 0){
        cout << "chislo3 - chetnoe" << endl;
        if (var2 > naib){
            naib = var2;
        }
    }
    else{
        cout << "chislo3 - nechetnoe" << endl;
    }

    if (var3%2 == 0){
        cout << "chislo4 - chetnoe" << endl;
        if (var3 > naib){
            naib = var3;
        }
    }
    else{
        cout << "chislo4 - nechetnoe" << endl;
    }

    if (var%2!=0 && var1%2!=0 && var2%2!=0 && var3%2!=0){
        cout << "Not found" << endl;
    }
    //Нахождение большего числа
    cout << "Naib " << naib << endl;
    return 0;
}