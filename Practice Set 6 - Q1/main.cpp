#include <iostream>

using namespace std;

void copyArray(int a1[], int a2[])
{
    for (int i = 0; i < 10; i++)
        a2[i] = a1[i];
}

int main()
{
    int arr1[10], arr2[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr1[i];
    }

    copyArray(arr1, arr2);

    /*
    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr1[i];
    }
    */

    cout<<"\n==============================================\n";
    for (int i = 0; i < 10; i++)
        cout<<arr2[i]<<endl;
    return 0;
}
