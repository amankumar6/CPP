#include <bits/stdc++.h>
#define ll                      long long int
#define i(a,n)                  int a=n;
#define l(a,n)                  ll a=n;
#define d(a,n)                  double a=n;
#define s(a)                    string a;
#define c(a)                    ll a; cin>>a;
#define cd(a)                   double a; cin>>a;
#define cs(a)                   string a; cin>>a;
#define ci(a)                   cin>>a
#define co(a)                   cout<<a
#define cos(a)                  cout<<a<<" "
#define con(a)                  cout<<a<<endl
#define yes                     cout<<"YES"<<endl
#define no                      cout<<"NO"<<endl
#define nl                      cout<<endl
#define ca(arr,n)               for(ll i=0;i<n;i++) cin>>arr[i]
#define caa(arr,n)              c(n); ll arr[n]; for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n)               for(ll i=a;i>=n;i--)
#define f(i,n)                  for(ll i=0;i<n;i++)
#define f1(i,a,n)               for(ll i=a;i<n;i++)
#define lcm(a,b)                (a*b)/__gcd(a,b)
#define T                       ll t=1; cin>>t; while(t--)
#define sr(a,n)                 sort(a,a+n)
#define rv(a,n)                 reverse(a,a+n)
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ret(x)                  return cout<<x,0;
 
using namespace std;

int psb(ll k, ll arr[], ll high, ll size);
 
int main()
{
    fast;
    T{
        c(nn);
        l(lw, 1);
        c(hh);
        ll arr[nn];
        l(hg, 1e18);
        ca(arr, nn);
        while(lw < hg){
            l(m, (lw + hg) / 2);
            if(psb(m, arr, hh, nn)) hg = m;
            else lw = m + 1;
        }
        con(hg);
    }
    return 0;
}

int psb(ll k, ll arr[], ll high, ll size){
    l(ans, 0);
    f1(i, 1, size) ans += min(k, arr[i] - arr[i - 1]);
    ans += k;
    return (high <= ans);
}