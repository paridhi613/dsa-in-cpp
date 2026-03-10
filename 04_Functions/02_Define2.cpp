#include <iostream>
using namespace std;

int printValue()
{
    cout << "Ni Hao!" << endl;
    return 3;
}

int main()
{

    //first method
    int val = printValue();
    cout << "val = " << val << endl; 

    cout << endl;

    //second method
    cout << printValue();
}