#include <bits/stdc++.h>
typedef long long ll;
#define meraCaseHai \
    ll titu = 1;    \
    cin >> titu;    \
    while (titu--)
#define fastChalNaBhai                \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

using namespace std;

// For Solution: https://t.me/CompetitiveProgramming69

int main()
{
    fastChalNaBhai;

    meraCaseHai
    {
        ll newnew;
        cin >> newnew;
        char meraArrayHaiBro[newnew][newnew];

        for (int i = 0; i < newnew; i++)
            for (int j = 0; j < newnew; j++)
                meraArrayHaiBro[i][j] = '.';
        meraArrayHaiBro[1][1] = 'Q';

        for (int i = 3; i < newnew; i++)
            meraArrayHaiBro[i][i] = 'Q';

        for (int i = 0; i < newnew; i++)
        {
            for (int j = 0; j < newnew; j++)
                cout << meraArrayHaiBro[i][j];
            cout << endl;
        }
    }
}