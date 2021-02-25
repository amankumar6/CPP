#include <iostream>
using namespace std;
#define ll long long int

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,x;
	ll c=0,d=0,l[1000],r[1000];
	cin>>n>>x;
	for(ll i=0;i<n;i++)
	{
	    cin>>l[i]>>r[i];
	}
	for(ll i=0;i<n;i++)
	{
        if(x>=l[i] && x<=r[i])
        {
            c=l[i];
            d=r[i];
            break;
        }
	}
	for(ll i=0;i<n;i++)
	{
	    for(ll j=0;j<n;j++)
	    {
	        if(l[j]<=c && c<=r[j]) 
	        c=l[j];
	        if(l[j]<=d && d<=r[j])
	        d=r[j];
	    }
	}
	x=d-c+1;
	cout<<x<<endl;
	return 0;
}
