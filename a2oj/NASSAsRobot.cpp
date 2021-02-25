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
    T{
        int x=0,y=0,temp=0;
        string s; c(s)
        f(i,0,s.length())
        {
            if (s[i]=='U') y++;
            else if (s[i]=='D') y--;
            else if (s[i]=='R') x++;
            else if (s[i]=='L') x--;
            else temp++;
        }
        cout<<x-temp<<" "<< y-temp<<" "<<x+temp<<" "<<y+temp<<endl;
    }
    return 0;
}