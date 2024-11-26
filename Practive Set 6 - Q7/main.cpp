#include <iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    int alpha[50];

    for (int i = 0; i < 25; i++)
        alpha[i] = i * i;

    for (int i = 25; i < 50; i++)
        alpha[i] = i * i * i;

    for (int i = 0; i < 50; i++)
    {
        cout<<setw(10)<<alpha[i];
        if ((i+1) % 10 == 0)
            cout<<endl;
    }
    return 0;
}
