#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        ll x,y,n;
        cin>>x>>y>>n;
        cout<<n-((n-y)%x)<<endl;
    }
    return 0;
}