#include <iostream>

using namespace std;

int smallestIndex(int a[], int s)
{
    int small = a[0], index = 0;

    for (int i = 1; i < s; i++)
    {
        if (a[i] < small)
            index = i;
    }

    return index;
}

int main()
{
    int arr[5] = {52, 41, 3, 2, 74};
    cout<<"Smallest element index: "<<smallestIndex(arr, 5);
    return 0;
}
