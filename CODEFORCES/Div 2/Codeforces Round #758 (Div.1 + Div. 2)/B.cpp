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
 
int main()
{
    fast;
    T{ 
        solveForMe();

    }
    return 0;
}

void solveForMe(){
    l(maxNo, 0);
    c(n);
    maxNo = ceil((float)(n-2)/2);
    vector<ll> vec(n, 0);
    c(a);
    l(temp, 1);
    c(b);
    
    if( a > maxNo || abs(a-b) > 1 || (a+b) > (n-2) || b > maxNo){
        cout << "-1" << endl;
        return;
    }

    if( a > b){
        temp = n - 2 + 2;
        for(ll i = 1; i < n && a; i += 2){
            a--;
            vec[i] = temp--;
        }
        f(i, n) if(!vec[i]) vec[i] = temp--;
    }
    else if(b > a){
        for(ll i = 1; i < n && b; i += 2){
            b--;
            vec[i] = temp++;
        }
        f(i, n) if(!vec[i]) vec[i] = temp++;
    }
    else{
        temp = n;
        a++;
        for(ll i = 0; i < n && a; i += 2){
            a--;
            vec[i] = temp--;
        }
        f(i, n) if(!vec[i]) vec[i] = temp--;
    }
    

    for(auto x: vec) cos(x);
    nl;
    return;
}
