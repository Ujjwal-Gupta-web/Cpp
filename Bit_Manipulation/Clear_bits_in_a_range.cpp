#include <iostream>
#include <math.h>
using namespace std;

void clearBits(int &n, int i, int j)
{
    int maskA = (~0) << (j + 1);
    int maskB = (pow(2, i) - 1);
    int mask = maskA | maskB;
    n = n & mask;
}

int main()
{

    int n = 759;
    int i = 2;
    int j = 4;
    cout << "The number is : " << n;
    clearBits(n, i, j);
    cout << "\n After clearing bits from " << i << "th to " << j << "th index\n";
    cout << "The number is : " << n;
    return 0;
}

// n = 759 = 1 0 1 1 1 1 0 1 1 1
//                     j   i
// i to j three bits are to be cleared,
// this can be done by doing AND with 1 1 1 1 1 0 0 0 1 1
// Now to obtain this mask-
// create maskA = ~0<<(4+1) =          1 1 1 1 1 0 0 0 0 0
// create maskB = pow(2,2)-1 = 3 = 0 0 0 0 0 0 0 0 1 1
// final mask = maskA | maskB    = 1 1 1 1 1 0 0 0 1 1
// this is the required mask

// ans = n & mask
//           j   i
// 1 0 1 1 1 1 0 1 1 1
// 1 1 1 1 1 0 0 0 1 1
// --------------------
// 1 0 1 1 1 0 0 0 1 1   = 739
// --------------------