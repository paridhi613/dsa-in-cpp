#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)      //i and j starts from 1
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)                  //i and j starts from 0
    {
        for (int j = 0; j < i + 1; j++)    // when i=0; j=0+1;   
        {
            cout << "* ";
        }
        cout << endl;
    }
}