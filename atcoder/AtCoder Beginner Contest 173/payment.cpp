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
    int n,bill=0;
    c(n);
    //cout << (1000 - n % 1000); % 1000 << endl;
    f1(i,1,10)
    {
        bill=i*1000;
        if (bill>=n) break;
    }
    cout<<bill-n<<endl;
    return 0;
}