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

void solve();
 
int main()
{
    fast;
    T{
        solve();
    }
    return 0;
}


void solve(){
    cs(xi);
    c(pi);
    cs(xii);
    c(pii);

    l(nn, xi.size() + pi);
    l(mm, xii.size() + pii);

    if(nn < mm){
        cout << "<" << endl;
        return;
    }
    else if(nn > mm){
        cout << ">" << endl;
        return;
    }
    else{
        l(temp, min(xi.size(), xii.size()));
        f(i, temp){
            if(xi[i] < xii[i]){
                cout << "<" << endl;
                return;
            }
            if(xi[i] > xii[i]){
                cout << ">" << endl;
                return;
            }
        }
        if(xi.size() < xii.size()){
            f1(i, temp, xii.size()){
                if(xii[i] > '0'){
                    cout << "<" << endl;
                    return;
                }
            }
        }
        else{
            f1(i, temp, xi.size()){
                if(xi[i] > '0'){
                    cout << ">" << endl;
                    return;
                }
            }
        }

        cout << "=" << endl;
        return;
    }
}