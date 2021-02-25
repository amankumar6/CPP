#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,ans=0;
        cin>>n;
        ans=(n*(n+1))/2;
        ll i=1;
        while(i<=n)
        {
            ans-=(2*i);
            i*=2;
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}