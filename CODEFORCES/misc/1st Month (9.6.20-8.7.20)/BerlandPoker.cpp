#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        if (m==0 || m==1)
        {
            cout<<m<<endl;
        }
        else
        {
            ll x=n/k;
            if (m<=x)
            {
                cout<<m<<endl;
                continue;
            }
            if (m>x)
            {
                ll temp=(m-x)/(k-1);
                if ((m-x)%(k-1)!=0)
                {
                    temp++;
                }
                cout<<x-temp<<endl;
            }
        }
    }
    return 0;
}