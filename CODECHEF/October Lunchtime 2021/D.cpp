#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        ll n, vec;
        cin >> n >> vec;
        ll ansans = (ll)n * (n - 1) / 2;
        cout << ansans << " ";

        if (vec >= n - 1) cout << n - 1 << "\n";

        else
        {
            ll temp = n - vec;
            ll ans = (ll)temp * (temp + 1) / 2;
            ans = ans + (vec - 1);
            cout << ans << "\n";
        }
    }
}