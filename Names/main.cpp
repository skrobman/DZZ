#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main(){

    int numberOfNames;
    int buf = 0;

    cout << "Enter number of names: ";
    cin >> numberOfNames;

    string *names = new string[numberOfNames];


    //Ввод имен
    for(int i = 0; i < numberOfNames; i++){
        cout << "Enter name #" << i+1 << " -> ";
        cin >> names[i];
    }

    //Сортировка
    for(int startIndex = 0; startIndex < numberOfNames - 1; ++startIndex){

        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numberOfNames; ++currentIndex)
        {
            if (names[currentIndex] < names[smallestIndex])
                smallestIndex = currentIndex;
        }
        swap(names[startIndex], names[smallestIndex]);
    }

    //Окончательный вывод
    cout << "\n";
    cout << "Here is your sorted list: " << "\n";

    for(int i = 0; i < numberOfNames; ++i){
        cout << "Name #" << i + 1 << " -> " << names[i] << "\n";
    }

    delete[] names;

    return 0;
}