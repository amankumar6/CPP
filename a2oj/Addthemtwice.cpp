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
    double a,b,c,sum=0;
    char ch1,ch2;
    c(a)
    cin.get(ch1);
    c(b)
    cin.get(ch2);
    c(c)
    sum=(a+b+c)+(a+b+c);
    cout<<fixed<<setprecision(6)<<sum<<endl;
    return 0;
}