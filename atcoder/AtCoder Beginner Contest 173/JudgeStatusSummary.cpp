#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f0(i,a,n) for(ll i=a;i<n-1;i++)
#define f(i,a,n) for(ll i=a;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<=n;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)
#define c(a) cin>>a;

int main()
{
    fast;
    int a=0,b=0,c=0,d=0;
    T{
        string s;
        c(s)
        if (s=="AC") a++;
        if (s=="WA") b++;
        if (s=="TLE") c++;
        if (s=="RE") d++;
    }
    cout<<endl;
    cout<<"AC x "<<a<<endl;
    cout<<"WA x "<<b<<endl;
    cout<<"TLE x "<<c<<endl;
    cout<<"RE x "<<d<<endl;
    return 0;
}