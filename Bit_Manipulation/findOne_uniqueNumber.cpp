#include <iostream>
using namespace std;

// Finding one unique non-repeating number where other number appers twice in the array
int main()
{
    int arr[] = {1, 2, 2, 5, 7, 5, 1, 6, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        ans = ans ^ arr[i];
    }
    // 1^2^2^5^7^5^1^6^6 = (1^1)^(2^2)^(5^5)^(6^6)^7 = (0)^(0)^(0)^(0)^7 = 7

    cout << ans;
}