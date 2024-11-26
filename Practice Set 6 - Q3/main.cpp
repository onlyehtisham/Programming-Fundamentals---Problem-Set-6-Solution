#include <iostream>

using namespace std;

int main()
{
    int arr[25], counter = 0, num;
    int pos, neg, even, odd;

    pos = neg = even = odd = 0;
    for (int i = 0; i < 25; i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
        if (arr[i] < 0)
            neg++;
        else
            pos++;
    }


    cout<<"\nPositive numbers: "<<pos;
    cout<<"\nNegative numbers: "<<neg;
    cout<<"\nEven numbers: "<<even;
    cout<<"\nOdd numbers: "<<odd;

    return 0;
}
