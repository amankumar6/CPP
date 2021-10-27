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
        int variable;
        cin >> variable;
        if (variable >= 1 && variable < 100)
            cout << "Easy" << endl;
        else if (variable >= 100 && variable < 200)
            cout << "Medium" << endl;
        else if (variable >= 200 && variable <= 300)
            cout << "Hard" << endl;
    }
    return 0;
}
