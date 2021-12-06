#include <iostream>
using namespace std;

// The LSB is 0 for even number and 1 for odd numbers
bool isOdd(int n)
{
    if ((n & 1) == 1)
    {
        return true;
    }
    return false;
}

int main()
{

    // int n = 5;
    int n = 12;

    if (isOdd(n))
    {
        cout << n << " is Odd.";
    }
    else
    {
        cout << n << " is Even.";
    }
    return 0;
}