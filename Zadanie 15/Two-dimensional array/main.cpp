#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int n, m;
    cout <<"n="; cin >>n;
    cout <<"m="; cin >>m;

    double **a = new double*[n];
    for (int i = 0; i < n; i++)
        a[i]=new double[m];

    double **b = new double*[n];
    for (int i = 0; i < n; i++)
        b[i]=new double[m+1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j]=1 + rand()%25;
            b[i][j+1]=a[i][j];
            cout <<a[i][j]<<" ";
        }
        cout << endl;
    }

    cout <<"Enter "<<n<<" elements first col:\n";
    for (int i = 0; i < n; i++)
        cin >>b[i][0];
    cout << endl;
    for (int i = 0; i < n; i++)
        delete [] a[i];
    delete [] a;

    a=b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m+1; j++)
            cout <<a[i][j]<<" ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        delete [] b[i];
    delete [] b;
    system("pause");
    return 0;
}