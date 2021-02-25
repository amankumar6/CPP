#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e7 + 5;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,ans = 0;
	cin >> n;
	for(ll i = 1; i <= n; i++)
	{
        for(ll j = i; j <= n; j += i)
		{
            ans += j;
        }
    }
	cout << ans;
	return 0;
}