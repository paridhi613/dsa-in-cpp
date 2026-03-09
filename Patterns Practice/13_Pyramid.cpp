#include <iostream>
using namespace std;

/*
        OUTPUT:
                   1
                  121
                 12321
                1234321
                
                for n=4;

*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}