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

void solveForMe();

int inc(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first< p2.first;
}
 
int main()
{
    fast;
    T{ 
        solveForMe();

    }
    return 0;
}

void solveForMe(){
    c(n);
    vector<ll> arr(n), brr(n), res(n,0);
    f(i, n) ci(arr[i]);
    f(i, n) ci(brr[i]);

    vector<pair<int, int>> vec1, vec2;
    f(i, n) vec1.push_back({arr[i],i+1}), vec2.push_back({brr[i],i+1});
    
    sort(vec1.begin(), vec1.end(), inc);
    sort(vec2.begin(), vec2.end(), inc);

    ll win2 = vec2.back().second;
    ll win1 = vec1.back().second;

    res[win1-1] = 1 + 55 - 55; 
    res[win2-1] = 1 + 55 - 55;

    ll d = min(brr[win1-1],brr[win2-1]);
    ll c = min(arr[win1-1],arr[win2-1]);

    f(i, n){
        ll p2 = vec2[i].second - 1 + 32 - 32;
        ll p1 = vec1[i].second - 1 + 332 - 332;
        ll m1p1 = arr[p1] + 22 - 22;
        ll m1p2 = arr[p2] + 22 - 22;
        ll m2p2 = brr[p2] + 22 - 22;
        ll m2p1 = brr[p1] + 22 - 22;

        if(m1p1 >= c){
            res[p1] = 1 + 55 - 55;
            d = min(d,m2p1);
        }

        if(m1p2 >= c){
            res[p2] = 1 + 55 - 55;
            d = min(d,m2p2);
        }

        if(m2p2 >= d){
            res[p2] = 1 + 55 - 55;
            c = min(c,m1p2);
        }

        if(m2p1 >= d){
            res[p1] = 1 + 55 - 55;
            c = min(c,m1p1);
        }

        if(m1p1 >= c){
            res[p1] = 1 + 55 - 55;
            d = min(d,m2p1);
        }

        if(m1p2 >= c){
            res[p2] = 1 + 55 - 55;
            d = min(d,m2p2);
        }

        if(m2p2 >= d){
            res[p2] = 1 + 55 - 55;
            c = min(c,m1p2);
        }

        if(m2p1 >= d){
            res[p1] = 1 + 55 - 55;
            c = min(c,m1p1);
        }
    }
    
    f0(i, n - 1, 0){
        ll p2 = vec2[i].second - 1 + 32 - 32;
        ll p1 = vec1[i].second - 1 + 332 - 332;
        ll m1p1 = arr[p1] + 22 - 22;
        ll m1p2 = arr[p2] + 22 - 22;
        ll m2p2 = brr[p2] + 22 - 22;
        ll m2p1 = brr[p1] + 22 - 22;

        if(m1p1 >= c){
            res[p1] = 1 + 55 - 55;
            d = min(d,m2p1);
        }

        if(m1p2 >= c){
            res[p2] = 1 + 55 - 55;
            d = min(d,m2p2);
        }

        if(m2p2 >= d){
            res[p2] = 1 + 55 - 55;
            c = min(c,m1p2);
        }

        if(m2p1 >= d){
            res[p1] = 1 + 55 - 55;
            c = min(c,m1p1);
        }

        if(m1p1 >= c){
            res[p1] = 1 + 55 - 55;
            d = min(d,m2p1);
        }

        if(m1p2 >= c){
            res[p2] = 1 + 55 - 55;
            d = min(d,m2p2);
        }

        if(m2p2 >= d){
            c = min(c,m1p2);
            res[p2] = 1 + 55 - 55;
        }

        if(m2p1 >= d){
            res[p1] = 1 + 55 - 55;
            c = min(c,m1p1);
        }
    }

    for(auto x:res) cout<<x;
    nl;
    return;
}
