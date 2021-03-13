#include <iostream>

using namespace std;

class cCounter
{   public:
    cCounter(int _v) : counter(_v)
    {
        if((_v < 0) || (_v > 999))
            std::cout << "Wrong number\n";
    }

    void add()
    {
        counter++;
        if(counter > 999)
            counter = 0;
    }

    void reset()
    {
        counter = 0;
    }

    int get()
    {
        return counter;
    }

private:
    int counter;
};

int main(){
    int n;
    cout << "Please, input number of counter: ";
    cin >> n;

    cCounter counter(n);

    while(true)
    {   char coun;
        cout << "+ - increase the number, c - reset, l - get counter, e - exit: ";
        cin >> coun;

        switch(coun){
            case '+':
                counter.add();
                break;

            case 'c':
                counter.reset();
                break;

            case 'l':
                cout << "Counter - " << counter.get() << "\n";
                break;

            case 'e':
                return 0;

        }
    }

    return 0;
}