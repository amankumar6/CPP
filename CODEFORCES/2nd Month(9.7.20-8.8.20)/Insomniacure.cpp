#include <bits/stdc++.h>
#define ll long long int
#define c(a) ll a; cin>>a;
#define cs(a) string a; cin>>a;
#define ci(a) cin>>a;
#define co(a) cout<<a;
#define nl cout<<endl;
#define ca(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n) for(ll i=a;i>=n;i--)
#define f(i,n) for(ll i=0;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<n;i++)
#define T ll t=1; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
    fast;
    c(k) c(l) c(m) c(n) c(d)
    ll ans=0;
    f1(i,1,d+1) if(i%k==0||i%l==0||i%m==0||i%n==0)ans++;
    co(ans) nl
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
