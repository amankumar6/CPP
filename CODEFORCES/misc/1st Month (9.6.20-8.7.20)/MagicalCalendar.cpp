#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        ll n,r; cin>>n>>r;
        cout<<min(((n-1)*n/2),(r*(r+1)/2));
    }
    return 0;
}