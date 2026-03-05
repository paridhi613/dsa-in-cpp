#include <iostream>
using namespace std;

int main()
{
    int nums[] = {12, 34, 78, -9, 89, 0};
    int size = 6;

    int smallest = INT16_MAX;
    int minIndex = 0;

    int largest = INT16_MIN;
    int maxIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            minIndex = i;
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
            maxIndex = i;
        }
    }

    cout << "smallest num: " << smallest << endl;
    cout << "index of smallest: " << minIndex << endl;

    cout << endl;

    cout << "largest num: " << largest << endl;
    cout << "index of largest: " << maxIndex << endl;
}


/*
smallest num: -9
index of smallest : 3

largest num : 89 
index of largest : 4
*/