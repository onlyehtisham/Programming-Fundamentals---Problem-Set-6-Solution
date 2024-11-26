#include <iostream>

using namespace std;

int main()
{
    int arr[25], counter = 0, num;

    for (int i = 0; i < 25; i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];
    }

    cout<<"\nEnter number to search: ";
    cin>>num;

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == num)
            counter++;
    }

    if (counter == 0)
        cout<<"This number is not present in array\n";
    else
        cout<<"Number is present "<<counter<<" times\n";

    return 0;
}
