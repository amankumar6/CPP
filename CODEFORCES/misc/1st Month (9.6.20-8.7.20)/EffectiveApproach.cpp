#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,a,b,m,arr[100001],v(0),p(0);
    cin>>n;
    for (ll i = 1; i <= n; ++i)
    {
        cin>>a;
        arr[a]=i;
    }

    cin>>m;

    while(m--)
    {
        cin>>b;
        v+=arr[b];
        p+=(n+1-arr[b]);
    }
    cout<<v<<" "<<p<<endl;
    return 0;
}