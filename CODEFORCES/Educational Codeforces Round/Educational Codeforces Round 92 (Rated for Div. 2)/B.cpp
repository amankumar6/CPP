#include <bits/stdc++.h>
#define ll long long int
#define i(a,n) int a=n;
#define l(a,n) ll a=n;
#define d(a,n) double a=n;
#define s(a) string a;
#define c(a) ll a; cin>>a;a
#define cd(a) double a; cin>>a;
#define cs(a) string a; cin>>a;
#define ci(a) cin>>a;
#define co(a) cout<<a;
#define cos(a) cout<<a<<" ";
#define con(a) cout<<a<<endl;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
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
    T{
        c(n); c(k); c(z);
        ll a[n];
        ca(a,n);
        l(score,0);
        l(count,0);
        l(max,0);
        l(maxi,0);
        l(max2,0);
        l(maxi2,0);
        bool increasing=false;
        if(z==0) f(i,k+1) score+=a[i];
        f(i,n-1) if(a[i]<=a[i+1]) count++;
        if(count==n-1) increasing=true;
        if(z<=k && z!=0)
        {
            if(increasing) f(i,k+1) score+=a[i];
            if(!increasing)
            {
                f(i,k+1)
                {
                    max=a[0];
                    if(a[i]>max)
                    {
                        max=a[i];
                        maxi=i;
                    }
                    else continue;
                }
                f(i,k+1)
                {
                    score+=a[i];
                    if(a[i]==max)
                    {
                        if(i+1<k+1)
                        {
                            if(a[i-1]<a[i+1]) max2=a[i+1];
                            else max2=a[i-1];
                        }
                        else if(i-1<k+1) max2=a[i-1];
                        while(k-- && z--)
                        {
                            score+=max;
                            score+=max2;
                        }
                    }
                }
            }
        }
        con(score);
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
