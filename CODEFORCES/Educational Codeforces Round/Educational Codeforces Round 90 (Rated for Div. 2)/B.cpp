#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t,win=0,alice=0,bob=0;
    string s;

    cin>>t;
    while (t--)
    {
        ll win=0,alice=0,bob=0;
        string s;
        cin>>s;
        ll n=s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='0')
            {
                alice++;
            }
            else if (s[i]=='1')
            {
                bob++;
            }
        }
        win=min(alice,bob);
        if (win%2==0)
        {
            cout<<"NET"<<endl;
        }
        else
        {
            cout<<"DA"<<endl;
        }
    }
    return 0;
}