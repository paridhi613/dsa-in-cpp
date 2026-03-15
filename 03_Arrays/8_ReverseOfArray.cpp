#include <iostream>
using namespace std;

//used the 2 pointer method to reverse the array
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;       //the starting and the ending point of the array

    while (start < end)                  //will swap the values only till start is less than end value
    {
        swap(arr[start], arr[end]);      //swaping the start and end value
        start++;                         //from start the value increases
        end--;                           //frim end the value decreases
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArray(arr, size);              //calling the reverse function

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";            //prints the reversed values
    }
}