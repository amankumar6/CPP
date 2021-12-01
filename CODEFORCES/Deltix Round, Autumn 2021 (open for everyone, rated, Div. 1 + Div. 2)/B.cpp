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
    c(nn);
    vector<char> vec(nn);
    vector<int> vec2(nn,0);
    l(ans, 0);
    c(quard);
    cs(st)

    f(i, nn) vec[i] = st[i];

    f(i, (nn-2)){
        if(vec[i+2] == 'c' && vec[i+1] == 'b' && vec[i] == 'a'){
            ans++;
            vec2[i] = 1;
        }
    }

    while(quard--){
        char temp;
        c(first);
        ci(temp);
        first--;
        if(vec[first] != temp){
            char temp2 = vec[first];
            vec[first] = temp;
            if(first && vec2[first-1] && temp2 == 'b'){
                vec2[first-1] = 0;
                ans--;
            }
            if(vec2[first-2] && temp2 == 'c' && first>1){
                vec2[first-2] = 0;
                ans--;
            }
            if(vec2[first] && temp2 == 'a' ){
                vec2[first] = 0;
                ans--;
            }
            if(temp == 'a'){
                if(vec[first+1]=='b' && first<(nn-2) && vec[first+2]=='c'){
                    ans++;
                    vec2[first] = 1;
                }
            }
            if(temp == 'b'){
                if(first && vec[first-1]=='a' && vec[first+1]=='c' && first<(nn-1)){
                    if(vec2[first-1] == 0){
                        ans++;
                        vec2[first-1] = 1;
                    }   
                }
            }
            if(temp == 'c'){
                if(vec[first-1]=='b' && vec[first-2]=='a' && first>1){
                    if(vec2[first-2] == 0){
                        vec2[first-2] = 1;
                        ans++;
                    }   
                }
            }
            
        }
        con(ans);
    }
    return 0;
}
