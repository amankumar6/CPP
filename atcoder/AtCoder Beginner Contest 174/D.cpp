#include <bits/stdc++.h>

#define ll                      long long int
#define i(a,n)                  int a=n
#define l(a,n)                  ll a=n
#define d(a,n)                  double a=n
#define s(a)                    string a
#define c(a)                    ll a, cin>>a
#define cd(a)                   double a, cin>>a
#define cs(a)                   string a, cin>>a
#define ci(a)                   cin>>a
#define co(a)                   cout<<a
#define cos(a)                  cout<<a<<" ";
#define con(a)                  cout<<a<<endl
#define yes                     cout<<"YES"<<endl
#define no                      cout<<"NO"<<endl
#define nl                      cout<<endl
#define ca(arr,n)               for(ll i=0;i<n;i++) cin>>arr[i]
#define f0(i,a,n)               for(ll i=a;i>=n;i--)
#define f(i,n)                  for(ll i=0;i<n;i++)
#define f1(i,a,n)               for(ll i=a;i<n;i++)
#define T                       ll t=1; cin>>t; while(t--)
#define lcm(a,b)                (a*b)/__gcd(a,b)
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ret(x)                  return cout<<x,0;

using namespace std;

int main()
{
    fast;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll red=0,white=0;
    f(i,n) if(s[i]=='R') red++;
    f(i,red) if(s[i]=='W') white++;
    con(white);
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
