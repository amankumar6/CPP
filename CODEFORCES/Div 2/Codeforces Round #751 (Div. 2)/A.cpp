#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define MOD 1000000007

//################## Vector ###################
#define vll vector<ll>
#define vi vector<int>
#define vpi vector<pair<int, int>>
#define vpll vector<pair<ll, ll>>
#define pll pair<ll, ll>
#define pi pair<int, int>
#define pb push_back
// aacha tho yae vector hai ok ok good good
#define mp make_pair
#define all(a) (a).begin(), (a).end()
#define mem(a, x) memset(a, x, sizeof(a))
#define ff first
#define ss second
#define f(i, n) for (int i = 0; i < n; i++)
#define fo(i, l, u) for (int i = l; i < u; i++)
#define rfo(i, l, u) for (int i = l; i >= u; i--)
#define ps(x, y) fixed << setprecision(y) << x
#define nl "\n"
#define py cout << "YES" << nl;
#define pn cout << "NO" << nl;
#define pmp cout << i.first << " " << i.second << nl;
#define p(x, y) cout << "x is " << x << " " \
                     << "y is " << y << nl;

// Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>> g = gq;
// v.push_back( make_pair(a[i],ar1[i]) );

void solve()
{
    string str;
    cin >> str;
    string tempSt = str;
    sort(tempSt.begin(), tempSt.end());

    cout << tempSt[0] << " ";

    char t = tempSt[0];

    int flag = 1;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == t)
        {
            flag--;
            if (flag < 0)
                cout << str[i];
        }
        else
            cout << str[i];
    }
    cout << endl;
}

// question kya tha bhai?

// bhai question tho https://codeforces.com/contest/1602/problem/A yae tha
int main()
{
    int t;
    t = 1;
    cin >> t;

    while (t--)
    {
        solve(); // solve kro na yaar
    }
}