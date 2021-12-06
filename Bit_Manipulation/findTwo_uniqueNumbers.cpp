#include <bits/stdc++.h>
using namespace std;

// Finding two unique non-repeating number where other number appers twice in the array
int main()
{
    int arr[] = {6, 5, 1, 6, 1, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans = ans ^ arr[i];
    }

    int pos = 0;

    while ((ans & 1) == 0)
    {
        ans = ans >> 1;
        pos += 1;
    }

    int checker = 1 << pos;

    vector<int> arrA;
    vector<int> arrB;

    for (int i = 0; i < len; i++)
    {
        if ((arr[i] & checker) == 0)
        {
            arrA.push_back(arr[i]);
        }
        else
        {
            arrB.push_back(arr[i]);
        }
    }

    int ansA = 0;
    int ansB = 0;

    for (int i = 0; i < arrA.size(); i++)
    {
        ansA = ansA ^ arrA[i];
    }
    for (int i = 0; i < arrB.size(); i++)
    {
        ansB = ansB ^ arrB[i];
    }
    cout << ansA << "   " << ansB;
}

// 6 , 5 , 1 , 6 , 1 , 3
// - XOR of all numbers gives = 5^3 which is
// 1 0 1 - 5
// 0 1 1 - 3
// ---------
// 1 1 0 - 6
// ---------

// now we will check at fist at place the bits in 5 and 3 are different
// based on that we will create two groups one with that bit equal to 0 and one with 1
// this is will ensure that both these numbers remain in seperate group.

// to know that bit we can see that xor result , where the bit in result in 1 , the bits in individual numbers
// are different.
// so taking the 1th index.

// now to create groups -
// 1<<1  = 10
// now,
// 10 & number == 0 => 1th bit is 0 in that number 
//                else 1th bit is 1 in that number

// now two groups formed will be -
// {5,1,1} - Xor of all gives - 5
// {6,6,3} - Xor of all gives - 3

// hence we are getting the numbers which were required.


