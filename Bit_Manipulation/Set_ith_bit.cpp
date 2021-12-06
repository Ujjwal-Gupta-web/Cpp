#include <iostream>
using namespace std;

void setBit(int &n, int i)
{
    int mask = 1 << i;
    n = n | mask;
}

int main()
{
    int n = 10;
    int i = 2;

    cout << "Initially the number is : " << n;
    setBit(n, i);
    cout << "\nAfter setting the " << i << "th bit";
    cout << "\nThe number is " << n;

    return 0;
}

// n = 01*0*10
// mask = 1<<i = 1<<2 = 00100

// Now doing (n | mask)
// 0 1 *0* 1 0
// 0 0 *1* 0 0
// ------------
// 0 1 *1* 1 0
// ------------
// The ith bit is set now