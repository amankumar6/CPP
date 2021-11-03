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
 
int main()
{
    fast;
    T{
        l(last, 0);
        l(t, 0);
        l(sizeofVec, 0);
        vector<long long int> vec;
        vector<long long int> real;
        c(n);
        while(n--){
            c(temp);
            vec.push_back(temp);
        } 
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());

        sizeofVec = vec.size();
        last = vec[sizeofVec - 1];
        vec.pop_back();

        real.push_back(last);

        while(!vec.empty()){
            sizeofVec = vec.size();
            t = vec[sizeofVec - 1];
            vec.pop_back();
            t -= last;
            last += t;
            real.push_back(t);
        }

        sort(real.begin(), real.end());
        sizeofVec = real.size();
        con(real[sizeofVec - 1]);

    }
    return 0;
}
 