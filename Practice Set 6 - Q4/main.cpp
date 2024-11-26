#include <iostream>

using namespace std;

int main()
{
    int arr1[5] = {5, 4, 3, 2, 1}, arr2[5];
    int n = 4;

    for(int i = 0; i < 5; i++)
    {
        arr2[n--] = arr1[i];
    }

    cout<<"Array 2 elements\n";
    for(int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<endl;
    }
    return 0;
}
