#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int arr[20], num, j = 0;

    cout<<"Enter 20 numbers\n";
    for (int i = 0; i < 20; i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>num;
        if (num >= 10 && num <= 100)
        {
            if (linearSearch(arr,20,num) == -1)
                arr[j++] = num;
        }
    }

    for(int i = 0; i < j; i++)
        cout<<arr[i]<<endl;
    return 0;
}
