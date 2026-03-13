#include <iostream>
using namespace std;

int Prime(int n)
{
    bool isPrime = true;

    if (n <= 1)
        isPrime = false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            isPrime = false;
    }
    return isPrime;
}

int main()
{

    int n;
    cout << "enter the value: ";
    cin >> n;

    for (int num = 2; num <= n; num++)
    {
        if (Prime(num))
        {
            cout << num << " ";
        }
    }
}
