#include <iostream>
using namespace std;

// function for sum
int sum(int a, int b) // defining the parameters
{
    int s = a + b;
    return s;
}

int main()
{
    // function call
    cout << sum(45, 90) << endl; // calling the parameters
    cout << sum(5, 9) << endl;
}