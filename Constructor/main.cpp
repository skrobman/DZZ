#include <iostream>

using namespace std;

class Constructor{

private:
    int var1;
    int var2;

public:
    Constructor(int VAR1, int VAR2){ //Конструктор
        var1 = VAR1;
        var2 = VAR2;
        cout << VAR1 << endl;
        cout << VAR2 << endl;
    }

    void setVar(){
        cout << "Please, input first var";
        cin >> var1;
        cout << "Please, input second var";
        cin >> var2;
    }

    void getVar(){
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
    }
    ~Constructor(){ //Деструктор
       var1 = 0;
       var2 = 0;
       cout << "var1 = " << var1 << endl;
       cout << "var2 = " << var2 << endl;
    }
};
int main(){
    Constructor obj(0, 0);

    obj.setVar();
    obj.getVar();

return 0;
}