#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vpl;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))

#define mp make_pair
#define mt make_tuple
#define pb push_back
#define ff first
#define ss second

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define cases         \
    int test_case;    \
    cin >> test_case; \
    while (test_case--)


bool inc(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first < p2.first;
}

bool dec(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.first > p2.first;
}

int main()
{
    fastio

    cases{
        
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            if(i==0){
                for(int j=0; j<n; j++){
                    cout<<"()";
                }
                cout<<"\n";
            }
            else{
                for(int j=1; j<n; j++){
                    if(j==i){
                        cout<<"(())";
                    }
                    else{
                        cout<<"()";
                    }
                }
                cout<<"\n";
            }
           
        }
        
    }
}