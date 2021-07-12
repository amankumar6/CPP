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
    T
    {
        ll n;
        int temp,temp1;
        c(n)
        ll s[n];
        f(i,0,n)
        {
            c(s[i]);
        }
        f0(i,0,n)
        {
            if (s[i]==s[i+1])
            {
                temp1=0;
            }
            else
            {
                temp1=1;
            }
        }
        if (temp1==0)
        {
            f(i,0,n) cout<<s[i]<<" ";
        }
        else if (temp1==1)
        {
            for (ll i = 0; i < n-1; i+=2)
            {
                if (s[i+1]-s[i]>=0)
                {
                    temp=1;
                    s[i+1]=-s[i+1];
                    s[i]=-s[i];
                }
                if (s[i+1]-s[i]<=0)
                {
                    temp=0;
                    s[i+1]=-s[i+1];
                    s[i]=-s[i];
                }
            }
            if (temp==1)
            {
                for (ll i = 1; i < n-1; i+=2)
                {
                    if (s[i-1]-s[i]>=0)
                    {
                        s[i+1]=-s[i+1];
                        s[i]=-s[i];
                    }
                }
            }
            if (temp==0)
            {
                for (ll i = 0; i < n-1; i+=2)
                {
                    if (s[i+1]-s[i]<=0)
                    {
                        s[i+1]=-s[i+1];
                        s[i]=-s[i];
                    } 
                }
            }
            f(i,0,n) cout<<s[i]<<" ";    
        }
        cout<<endl;
    }
    return 0;
}