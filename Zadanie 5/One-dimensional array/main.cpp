#include <iostream>
#include<ctime>

using namespace std;

int main()
{
    int *arr, *arr1;
    int size,p_size,k,n,i;

    srand(time(0));

    cout<<"Please, input the size of the array ";
    cin>>p_size;

    cout<<"Input N ";
    cin>>n;
    cout<<"Input k ";

    cin>>k;
    size=n+k;

    arr = new int[size];
    arr1 = new int [size];

    cout<<"Array: ";
    for(i=0; i<p_size; i++)
    {
        arr[i]=rand() % 10;
        cout<<arr[i]<<" ";
    }

    cout<<"\n";

    for(i=0;i<n-1;++i)
        arr1[i]=arr[i];
    for(i=n-1;i<size;++i)
        arr1[i]=rand() % 10;

    cout<<"New Array: ";
    for(i=0; i<size-1; i++)
        cout<<arr1[i]<<" ";

    system("pause");

    delete [] arr;
    delete [] arr1;

    return 0;
}