#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        int x;
        cin>>x;
        cout<<"1 "<<x-1<<endl;
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int GCD(ll a,ll b)
{
    while (a!=b)
    {
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}

int LCM(ll a,ll b)
{
    ll lcm=(a*b)/GCD(a,b);
    return lcm;
}
int main()
{
    fast;
    T{
        ll x;
        cin>>x;
        for (ll i = 1; i <= 1000000000; i++)
        {
            for (ll j = 1; j <=1000000000; j++)
            {
                if (GCD(i,j)+LCM(i,j)==x)
                {
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}*/