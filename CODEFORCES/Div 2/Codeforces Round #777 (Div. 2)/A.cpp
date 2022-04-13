#include <bits/stdc++.h>
#define ll                      long long int
#define ld                      long long double
#define vi                      vector<int>
#define vl                      vector<ll>
#define vpi                     vector<pair<int, int>>
#define vpl                     vector<pair<ll, ll>>
#define all(v)                  v.begin(), v.end()
#define rall(v)                 v.rbegin(), v.rend()
#define minv(a)                 *min_element(a.begin(), a.end())
#define maxv(a)                 *max_element(a.begin(), a.end())
#define acc(a,n)                accumulate(a.begin(),a.end(),n)
#define yes                     cout<<"YES"<<endl
#define no                      cout<<"NO"<<endl
#define nl                      cout<<endl
#define mp                      make_pair
#define mt                      make_tuple
#define pb                      push_back
#define pf                      push_front
#define ff                      first
#define ss                      second
#define stp(n)                  fixed << setprecision(n)
#define ca(arr,n)               for(ll i=0;i<n;i++) cin>>arr[i]
#define caa(arr,n)              ll n; cin >> n; ll arr[n]; for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n)               for(ll i=a;i>=n;i--)
#define f(i,n)                  for(ll i=0;i<n;i++)
#define f1(i,a,n)               for(ll i=a;i<n;i++)
#define fv(v)                   for(auto& i: v) cin>>i
#define lcm(a,b)                (a*b)/__gcd(a,b)
#define T                       ll t=1; cin>>t; while(t--)
#define sr(a,n)                 sort(a,a+n)
#define rv(a,n)                 reverse(a,a+n)
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
using namespace std;
 
int main()
{
    fast;
    T{
        ll n, i = 0;
        cin >> n;

        if (n % 3 == 1) cout << '1';
        f(i, n/3)  cout << "21";
        if (n % 3 == 2) cout << '2';
        cout << "\n";
    }
    return 0;
}