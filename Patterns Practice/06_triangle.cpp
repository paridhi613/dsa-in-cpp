#include <iostream>
using namespace std;

/*      TO PRINT: 
          1
          2 2
          3 3 3
          4 4 4 4
*/

int main()
{
    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";  //for i=0; j=0+1; and will print 1 one time
        }
        cout << endl;
    }
}


