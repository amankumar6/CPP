#include <bits/stdc++.h>
using namespace std;
#define c(a) cin>>a;
#define ll long long int
#define f0(i,a,n) for(ll i=a;i<n-1;i++)
#define f(i,a,n) for(ll i=a;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<=n;i++)
#define T ll t=1; cin>>t; while(t--)
#define nl cout<<endl; 
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast;
    ll t; c(t)
    f1(i,1,t)
    {
        ll x,y,check,sum;
        char c,d;
        c(x) c(c) c(y) c(d) c(sum)
        if(c=='+') check=x+y;
        if(c=='-') check=x-y;
        if (sum==check) cout<<"Case "<<i<<": YES"<<endl;
        if (sum!=check) cout<<"Case "<<i<<": NO"<<endl;
        
    }
    return 0;
}