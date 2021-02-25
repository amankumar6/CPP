#include <bits/stdc++.h>
#define ll                      long long int
#define i(a,n)                  int a=n;
#define l(a,n)                  ll a=n;
#define d(a,n)                  double a=n;
#define s(a)                    string a;
#define c(a)                    ll a; cin>>a;a
#define cd(a)                   double a; cin>>a;
#define cs(a)                   string a; cin>>a;
#define ci(a)                   cin>>a;
#define co(a)                   cout<<a;
#define cos(a)                  cout<<a<<" ";
#define con(a)                  cout<<a<<endl;
#define yes                     cout<<"YES"<<endl
#define no                      cout<<"NO"<<endl
#define nl                      cout<<endl;
#define ca(arr,n)               for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n)               for(ll i=a;i>=n;i--)
#define f(i,n)                  for(ll i=0;i<n;i++)
#define f1(i,a,n)               for(ll i=a;i<n;i++)
#define T                       ll t=1; cin>>t; while(t--)
#define lcm(a,b)                (a*b)/__gcd(a,b)
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ret(x)                  return cout<<x,0;
using namespace std;
/*
int main()
{
    fast;
    ll k,x=1,n=7;
    cin>>k;
    if(k%2==0 || k%5==0) x=-1;
    else
    {
        while(n%k!=0)
        {
            n*=10;
            n+=7;
            n%=k;
            x++;
        }
    }
    cout<<x;
    
    return 0;
}
*/
int main()
{
    fast;
    ll k;
    cin >> k;
    ll rem=0;
    f(i,1000005)
    {
    	ll r=(10*rem+7)%k;
    	if(r==0) ret(i);
    	rem=r;
    }
    ret(-1);
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
