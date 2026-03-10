#include <iostream>
using namespace std;

// min of 2 num
int minOfTwo(int c, int d)
{
    if (c < d)
    {
        return c;
    }
    else
    {
        return d;
    }
}


//calling the function
int main()
{
    cout << "The min value is: " << minOfTwo(45, 90);
}
