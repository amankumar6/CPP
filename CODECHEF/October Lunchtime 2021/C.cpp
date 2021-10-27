#include <bits/stdc++.h>
#define ll long long int

#define merCase \
    ll t = 1;   \
    cin >> t;   \
    while (t--)
#define fastChaloNaYaar               \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

int main()
{
    fastChaloNaYaar;

    merCase
    {
        ll nahi;
        cin >> nahi;

        vector<ll> vectorHai(1, 1);
        for (ll i = 1; i < nahi; i++)
            vectorHai.push_back(i);
        ll answerlelo = 1;

        for (int i = 0; i < nahi; i++)
            answerlelo *= 2;

        vectorHai.push_back(answerlelo - 1 - (nahi * (nahi - 1)) / 2);
        sort(vectorHai.begin(), vectorHai.end());
        for (auto i : vectorHai)
            cout << i << " ";

        cout << endl;
    }
}