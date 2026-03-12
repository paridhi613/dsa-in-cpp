#include <iostream>
using namespace std;


//function for checking prime
bool prime(int n)
{
    if (n <= 1) //for negative numbers
        return false; 

    for (int i = 2; i < n; i++)  //2 se n-1 tak check krenge
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;

    if (prime(num))
        cout << "it is a prime number";

    else
        cout << "not a prime";
}