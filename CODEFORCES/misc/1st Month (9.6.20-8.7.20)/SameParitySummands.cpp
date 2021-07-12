#include <bits/stdc++.h>
#define ll long long int
#define c(a) ll a; cin>>a;
#define cs(a) string a; cin>>a;
#define ci(a) cin>>a;
#define co(a) cout<<a;
#define nl cout<<endl;
#define ca(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n) for(ll i=a;i<n-1;i++)
#define f(i,a,n) for(ll i=a;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<=n;i++)
#define f2(i,a,n) for(ll i=a;i>=n;i--)
#define T ll t=1; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    fast;
    T{
        c(n) c(k)
        ll c1=n-(k-1),c2=n-2*(k-1);
        if (c1>0 && c1%2!=0)
        {
            cout<<"YES"; nl
            f(i,0,k-1) cout<<"1 ";
            co(c1) nl
            continue;
        }
        if (c2>0 && c2%2==0)
        {
            cout<<"YES"; nl
            f(i,0,k-1) cout<<"2 ";
            co(c2) nl
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}

/*It's not who I am underneath, but what I do that defines me

MMMMMMMMMMMMMMMMMMMMM.                             MMMMMMMMMMMMMMMMMMMMM
 `MMMMMMMMMMMMMMMMMMMM           M\  /M           MMMMMMMMMMMMMMMMMMMM'
   `MMMMMMMMMMMMMMMMMMM          MMMMMM          MMMMMMMMMMMMMMMMMMM'
     MMMMMMMMMMMMMMMMMMM-_______MMMMMMMM_______-MMMMMMMMMMMMMMMMMMM
      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
     .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.
    MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                   `MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM'
                          `MMMMMMMMMMMMMMMMMM'
                              `MMMMMMMMMM'
                                 MMMMMM 
                                  MMMM
                                   MM
*/
