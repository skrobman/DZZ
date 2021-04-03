#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    char key;
    char arr[] = {'h', 'e', 'y', ' ', 'w', 'o', 'r', 'l', 'd', '.'};

    for (int i = 0; i < 10; i++) {
        cout << arr[i];
    }
    cout << endl;

    sort(arr, arr+10);

    for (int i = 0; i < 10; i++) {
        cout << arr[i];
    }
    cout << endl;

    cout << "Element ->" << " ";
    cin >> key;

    bool flag = false;
    int leftBorder = 0;
    int rightBorder = 9;
    int mid;

    while ((leftBorder <= rightBorder) && (!flag)) {
        mid = (leftBorder + rightBorder) / 2;

        if (arr[mid] == key) // значит ключ найден
            flag = true;
        if (arr[mid] > key) // если центральный элемент больше, чем ключ, значит смещаем правую границу
            rightBorder = mid - 1;
        else // если центральный элемент больше, чем ключ, значит смещаем правую границу
            leftBorder = mid + 1;
    }

    if (flag)
        cout << "Index of " << key << " is " << mid << endl;
    else
        cout << "Key not found" << endl;

    system("pause");

    return 0;
}