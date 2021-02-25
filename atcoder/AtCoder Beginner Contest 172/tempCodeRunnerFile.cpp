#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,k,ans=0,x,count=0,temp1=0,temp2=0;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
        temp1+=a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin>>b[i];
        temp2+=b[i];
    }
    ll temp=temp1+temp2;
    if (temp<=k)
    {
        cout<<n+m<<endl;
    }
    else
    {
        if (n>=m)
        {
            x=m;
        }
        else
        {
            x=n;
        }
        for (ll i = 0; i < x; i++)
        {
            ans+=a[i];
            if (ans<k)
            {
                count++;
            }
            if (ans>=k)
            {
                cout<<count<<endl;
                break;
            }
            ans+=b[i];
            if (ans<k)
            {
                count++;
            }
            if (ans>=k)
            {
                cout<<count<<endl;
                break;
            }
        }
    }

    return 0;
}