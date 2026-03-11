#include <iostream>
using namespace std;


//function for taking the sum of digits of a number
int digitSum(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;  //gets the last digit
        num /= 10;         //removes the last digit

        digSum += lastDigit;
    }

    return digSum; //return the summ of all the digits
}

int main()
{
    cout << "the sum of didgit: " << digitSum(2356) << endl;
    cout << "the sum of didgit: " << digitSum(145) << endl;
}