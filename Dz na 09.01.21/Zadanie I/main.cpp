#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    srand(time(0));
    for(int i = 0; i < 10; ++i){
        swap(arr[i],arr[rand() % 10]);
    }

    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    return 0;
}