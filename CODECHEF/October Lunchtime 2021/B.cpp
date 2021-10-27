#include <bits/stdc++.h>
#define ll long long int
#define mera  \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define fastChalo                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

int main()
{
    fastChalo;
    mera
    {
        ll a, ll b, ll p, ll q;

        if ((p % a == 0) && (q % b == 0))
        {
            ll x = p / a, y = q / b;
            if ((x - y) == 1 || (y - x) == 1 || (x - y) == 0 || (y - x) == 0)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
            
        }
        else
            cout << "no" << endl;
        
    }
    return 0;
}
