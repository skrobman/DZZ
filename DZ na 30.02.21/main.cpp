#include <iostream>
#include <ctime>

using namespace std;

struct List{
    int value;
    List *p;
};

//int n;

void getm(int k, List *q){
    List *t, *t1;
    t = q;
    for(int i = 0; i < k; i++){
        t1 = t -> p;
        t = t1;
    }
    cout << "value = " << t -> value << endl;
}

void inputList(int n, List *q){
    List *t, *t1;
    t = q;
    for(int i = 0; i < n; i++){
        t1 = t -> p;
        cout << i << " value = " << t -> value << endl;
        t = t1;
    }
}

void find(int n,List *q){
    bool flag;
    int wantedElem, index;
    cout<< "Enter the element you want to find: ";
    cin >> wantedElem;
    List *t, *t1;
    t = q;

    for (int i = 0; i < n; i++){
        t1 = t -> p;
        if (wantedElem == t -> value){
            flag = true;
            index = i;
            break;
        }
        else {
            flag = false;
        }
        t = t1;
    }

    if(flag == true){
        cout << "Index -> "<< index;
    }
    else if (flag == false){
        cout << "Index wasn't found in the list";
    }
}

//Delete
void deleteNum(int n, List *q){
    bool flag;
    int wantedElem, index;
    cout<< "Enter the element you want to delete: ";
    cin >> wantedElem;
    List *t, *t1, *buf;
    t = q;

    for (int i = 0; i < n; i++){
        t1 = t -> p;
        if (wantedElem == t -> value){
            flag = true;
            index = i;
            break;
        }
        else {
            flag = false;
        }
        t = t1;
    }

    if(flag == true){
        for(int i = 0; i < n; i++){
            flag = true;
            index = i;
            buf = t;
            t = t1;
            t1 = buf;
        }
        for(int i = 0; i < n - 1; i++){
            t1 = t -> p;
            cout << i << " value = " << t -> value << endl;
            t = t1;
        }
    }
    else if (flag == false){
        cout << "Index wasn't found in the list, we cant delete your number";
    }
    delete t;
    delete buf;
}

//Sorting
void sorting(int n,List *q){
    List *t, *t1, *buf;
    t = q;

    for(int i = 0; i < n; i++){
        if(t -> p > t1 -> p){
            t = t1;
            t1 = t -> p;
        }
        t -> p = buf;
        buf -> p = t1;
    }
//    buf -> p = t -> p;
    for(int i = 0; i < n; i++){
        t1 = t -> p;
        cout << i << " value = " << t -> value << endl;
        t = t1;
    }
    delete t;
    delete buf;
}

int main(){
    srand(time(0));
    List *q0, *q1, *q2;

    q0 = new List;
    q1 = q0;

    int n;

    cout << "n = ";
    cin >> n;

    int e = n;

    for(int i = 1; i < n; i++){
        q1 -> value = rand()%100;
        q2 = new List;
        q1 -> p = q2;
        q1 = q2;
    }
    q1 -> value = rand()%100;
    q1 -> p = q0;

    inputList(n, q0);

    int fun;

    cout << "Please, input number of function";
    cin >> fun;

    if(fun == 1) {
        do {
            int k;
            cout << "input index or 0 to exit" << endl;
            cin >> k;
//            int e = n - k;
            if (!k) {
                for (int i = 1; i < n; i++) {
                    q1 = q2->p;
                    delete q2;
                    q2 = q1;
                }
                return 0;
            }
            getm(k, q0);
//            sorting(n,k,q0);
        } while (true);
    }
    else if (fun==2) {
        find(n,q0);
    }
    else if (fun==3) {
        deleteNum(n,q0);
    }
    else if (fun == 4){
        sorting(n,q0);
    }
    else{
        cout << "We cant found your function";
    }
}