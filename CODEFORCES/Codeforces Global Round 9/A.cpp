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
        int n; c(n)
		f(i,0,n)
        {
			int a; c(a)
			if(i%2==0) cout<<-1*abs(a)<<" ";
			else cout<<abs(a)<<" ";
		}
        cout<<endl;
    }
    return 0;
}