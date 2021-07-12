#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        ll n,count=0;
        cin>>n;
        while (n%6==0)
        {
            n/=6;
            count++;
        }
        while (n%3==0)
        {
            n/=3;
            count+=2;
        }
        if (n!=1)
        {
            count=-1;
        }
        cout<<count<<endl;
    }
    return 0;
}