#include <bits/stdc++.h>
#define ll long long int
#define i(a, n) int a = n;
#define l(a, n) ll a = n;
#define d(a, n) double a = n;
#define s(a) string a;
#define c(a) \
    ll a;    \
    cin >> a;
#define cd(a) \
    double a; \
    cin >> a;
#define cs(a) \
    string a; \
    cin >> a;
#define ci(a) cin >> a
#define co(a) cout << a
#define cos(a) cout << a << " "
#define con(a) cout << a << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define ca(arr, n)             \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define caa(arr, n)            \
    c(n);                      \
    ll arr[n];                 \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
#define f0(i, a, n) for (ll i = a; i >= n; i--)
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, a, n) for (ll i = a; i < n; i++)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define T     \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define sr(a, n) sort(a, a + n)
#define rv(a, n) reverse(a, a + n)
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ret(x) return cout << x, 0;

using namespace std;

int main()
{
    fast;
    T
    {
        string str;
        cin >> str;
        ll temp = 0;
        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] == 'a' && str[i + 1] == 'b')
                temp++;
            else if (str[i] == 'b' && str[i + 1] == 'a')
                temp--;
        }
        if (temp == 0) cout << str << endl;

        else if (temp == 1)
        {
            for (int i = 0; i < str.size() - 1; i++) cout << str[i];
            cout << "a\n";
        }
        else
        {
            for (int i = 0; i < str.size() - 1; i++) cout << str[i];

            cout << "b\n";
        }
    }

    return 0;
}