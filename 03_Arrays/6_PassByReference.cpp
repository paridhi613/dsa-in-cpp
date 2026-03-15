#include <iostream>
using namespace std;


//function for chnging the values in main function


//this function makes the values in main fxn double
void changeArr(int arr[], int size)
{
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = {1, 2, 3};

    changeArr(arr, 3);  //calling the change fucntion

    cout << "in main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " "; //the doubled value will be printed
    }
}