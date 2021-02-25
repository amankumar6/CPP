#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, -8, 0, 5, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    long long int brr[n + 1] = {0};
    long long int ans = 0;
    for (long long int i = n - 1; i >= 0; i--)
        brr[i] = brr[i + 1] + arr[i];

    for (long long int i = 0; i < n; i++)
        if (brr[i] >= 0)
            ans += brr[i];
    cout << ans << endl;
    return 0;
}