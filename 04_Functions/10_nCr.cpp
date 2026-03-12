#include <iostream>
using namespace std;


//function to find the nCr value
int nCr(int n, int r)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)    //n!
    {
        fact *= i;
    }

    int fact2 = 1;
    for (int i = 1; i <= r; i++)  //r!
    {
        fact2 *= i;
    }

    int fact3 = 1;
    for (int i = 1; i <= (n - r); i++)  //n-r!
    {
        fact3 *= i;
    }

    return fact / (fact2 * fact3);  //n!/r!(n-r)!
}

int main()
{
    cout << nCr(6, 3) << endl;
    cout << nCr(8, 2);
}