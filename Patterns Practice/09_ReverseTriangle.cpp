#include <iostream>
using namespace std;

/*
      TO PRINT:
      1
      2 1
      3 2 1 
      4 3 2 1

      for n=4
*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)    //number prints in the reverse order
        {
            cout << j << " ";
        }
        cout << endl;
    }
}