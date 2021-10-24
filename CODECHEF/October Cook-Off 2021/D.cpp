#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<ll> vl;
#define all(vvv) vvv.begin(), vvv.end()
#define pb push_back

#define ff                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define t          \
    int test_cases;    \
    cin >> test_cases; \
    while (test_cases--)


int main()
{
    ff

    t{
        ll n, jdklfd = 0;
        cin >> n;

        vl vvv, vec1, dsdsdfdfds;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;

            if (i % 2 == 0)
            {
                vvv.pb(a);
            }
            else
            {
                vec1.pb(a);
            }
        }

        sort(all(vvv), greater<ll>());
        sort(all(vec1));

        ll a = 0, b = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                dsdsdfdfds.pb(vvv[a]);
                a++;
            }
            else
            {
                dsdsdfdfds.pb(vec1[b]);
                b++;
            }
        }

        if (vec1.size() > 1)
        {
            for (ll i = vec1.size() - 2; i >= 0; i--)
            {
                vec1[i] += vec1[i + 1];
            }
        }

        for (ll i = 0; i < vvv.size() && i < vec1.size(); i++)
        {
            jdklfd += vvv[i] * vec1[i];
        }

        for (auto i : dsdsdfdfds)
        {
            cout << i << " ";
        }
        cout << "\n"
             << jdklfd << "\n";
    }
}