#include <iostream>
using namespace std;

void clearBit(int &n, int i)
{
    int mask = 1 << i;
    mask = (~mask);
    n = (n & mask);
}

int main()
{
    int n = 10;
    int i = 3;
    cout << "The number is : " << n; // in binary - 0*1*010  - *i* is the ith bit
    clearBit(n, i);
    cout << "\nAfter clearing " << i << "th bit";
    cout << "\nThe number is : " << n; // in binary - 0*0*010
    return 0;
}

// DRY RUN
// n = 01010
// i = 3
// mask = 1<<3  = 01000
// mask = ~mask = 10111
// Now n&mask
// 0 *1* 0 1 0
// 1 *0* 1 1 1
// ------------
// 0 *0* 0 1 0
// ------------