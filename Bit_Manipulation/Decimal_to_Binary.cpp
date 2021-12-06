#include <bits/stdc++.h>
using namespace std;

long long int decimalToBinary_bitwise(int n);
string decimalToBinary_bitwise_string(int n);
string decimalToBinary_bitwise_optimised(int n);

int main()
{
    int n = 5000;
    cout << n << endl;
    cout << "decimalToBinary_bitwise" << endl;
    cout << decimalToBinary_bitwise(n) << endl << endl;

    cout << "decimalToBinary_bitwise_string" << endl;
    cout << decimalToBinary_bitwise_string(n) << endl<< endl;

    cout << "decimalToBinary_bitwise_optimised" << endl;
    cout << decimalToBinary_bitwise_optimised(n) << endl<< endl;

    return 0;
}

// for bigger value this gives garbage values , 
// because long long int can store 10^18 order values
// but binary numbers can have upto 30-32 digits in their representation
long long int decimalToBinary_bitwise(int n)
{
    int p = 1;
    int ans = 0;
    while (n > 0)
    {
        ans += (n & 1) * p;
        p *= 10;
        n = n >> 1;
    }
    return ans;
}

string decimalToBinary_bitwise_string(int n)
{
    string s;
    while (n > 0)
    {
        s.push_back('0' + (n & 1));
        n = n >> 1;
    }
    reverse(s.begin(),s.end());
    return s;
}

string decimalToBinary_bitwise_optimised(int n)
{
    string s;
    int mask = 1 << 30;
    bool isOneFound = false;

    while (mask != 0)
    {
        if (((mask & n) == 0) and (isOneFound == false))
        {
            mask = mask >> 1;
            continue;
        }
        else
        {
            isOneFound = true;
            if ((mask & n) > 0)
            {
                s.push_back('1');
            }
            else
            {
                s.push_back('0');
            }
            mask = mask >> 1;
        }
    }
    return s;
}