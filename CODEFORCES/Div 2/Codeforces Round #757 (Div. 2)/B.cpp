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
 
int compareBro(pair<ll, ll> pp1, pair<ll, ll> pp2){
    return pp1.first > pp2.first;
}

int main()
{
    fast;
    T{
        vector<pair<ll, ll>> vec;
        l(ans, 0);
        c(num);
        vector<ll> res(num + 1, 0);
        l(left, -1);
        l(right, 1);
        f(i, num){
            c(inp);
            vec.push_back({inp, i + 1});
        }

        sort(vec.begin(), vec.end(), compareBro);
        f(i, num){
            auto temp = vec[i];
            if(i % 2){
                ans += temp.first * abs(left);
                res[temp.second] = left--;
            }
            else{
                ans += temp.first * right;
                res[temp.second] = right++;
            }
        }

        con(2*ans);
        for(auto i:res) cos(i);
        nl;

    }
    return 0;
}
