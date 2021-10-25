#include <bits/stdc++.h>
#define ll long long int;
#define fastChaloYaar                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define testCase \
    ll t = 1;    \
    cin >> t;    \
    while (t--)

using namespace std;

// question kya tha bhai https://codeforces.com/contest/1602/problem/B

int main()
{
    fastChaloYaar;
    testCase
    {
        int newnew, s = 0;
        cin >> newnew;

        vector<int> vectorHaiBhai(newnew);
        for (int i = 0; i < newnew; i++)
            cin >> vectorHaiBhai[i];

        vector<vector<int>> tempAnsHaiBhai(2001);
        for (int i = 0; i < newnew; i++)
            tempAnsHaiBhai[0].push_back(vectorHaiBhai[i]);

        for (int j = 1; j <= 2000; j++)
        {
            int arr[2001];
            for (int i = 0; i <= 2000; i++)
                arr[i] = 0;

            for (int i = 0; i < newnew; i++)
                arr[tempAnsHaiBhai[j - 1][i]]++;

            for (int i = 0; i < newnew; i++)
                tempAnsHaiBhai[j].push_back(arr[tempAnsHaiBhai[j - 1][i]]);
        }

        int kyu;
        cin >> kyu;
        while (kyu--)
        {
            int a1, bbb;
            cin >> a1 >> bbb;

            if(bbb<=2000)
                cout<<tempAnsHaiBhai[bbb][a1-1]<<endl;
            
            else
                cout<<tempAnsHaiBhai[2000][a1-1]<<endl;
        }
    }

    return 0;
}