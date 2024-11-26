#include <iostream>

using namespace std;

void modify(int a[])
{
    for (int i = 0; i < 10; i++)
        a[i] *= 3;
}

int main()
{
    int arr[10] = {25, 32, 69, 44, 10, 74, 85, 20, 28, 41};

    modify(arr);
    for(int i = 0; i < 10; i++)
        cout<<arr[i]<<endl;
    return 0;
}
