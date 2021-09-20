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

        // #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
        // #endif

    ll n;
    cin >> n;

    vl v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(all(v));
    ll m;
    cin >> m;

    vpl drag;
    for(ll i=0; i<m; i++){
        ll a,b;
        cin>>a>>b;

        drag.pb(mp(a,b));
    }

    ll x=v[0],y=0;
    for(ll i=0; i<n; i++){
        y += v[i];
    }

    for(ll i=0; i<m; i++){
        ll a = drag[i].ff, b = drag[i].ss;
        ll ans = 0,tmp = 0;

        auto itr = lower_bound(all(v),a);
        if(itr != v.end()){
            ans = max(ans,b-(y-v[itr-v.begin()]));
            if(itr != v.begin()){
                tmp += a - v[itr-v.begin()-1];
                tmp += max(ll(0),b-(y-v[itr-v.begin()-1]));
                ans = min(ans,tmp);
            }
            
        }
        else{
            ans = a - v.back();
            ans += max((ll)0,b-(y-v.back()));
            if(itr != v.begin()){
                tmp += a - v[v.size()-2];
                tmp += max(ll(0),b-(y-v[v.size()-2]));
                ans = min(ans,tmp);
            }
        }

        cout<<ans<<"\n";
    }

}