#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define c(a) ll a; cin>>a;
#define cs(a) string s; cin>>s;
#define co(a) cout<<a;
#define ci(a) cin>>a;
#define nl cout<<endl;
#define ca(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n) for(ll i=a;i<n-1;i++)
#define f(i,a,n) for(ll i=a;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<=n;i++)
#define f2(i,a,n) for(ll i=a;i>=n;i--)
#define T ll t=1; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast;
    T{
        c(n) c(x)
        ll sum=0,temp=-1;
        f(i,0,n)
        {
            c(a) sum+=a; 
            if(sum%x) temp = max(temp,max(i+1,n-(i+1)));
        }
        co(temp) nl
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
