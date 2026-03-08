#include <iostream>
using namespace std;

/*
      OUTPUT:
       1111
        222
         33
          4

      for n=4   
*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)      //for spaces in the start
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)   //for printing the numbers
        {
            cout << i + 1;
        }
        cout << endl;
    }
}