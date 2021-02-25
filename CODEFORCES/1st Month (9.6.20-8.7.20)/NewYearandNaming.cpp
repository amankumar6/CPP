#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(ll i=a;i<n;i++)
#define fe(i,a,n) for(ll i=a;i<=n;i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)
#define c(a) cin>>a;

int main()
{
    fast;
    int n, m;
    string s[22], t[22];
	c(n);c(m);
	f(i,0,n) c(s[i]);
	f(i,0,m) c(t[i]);
	int q; c(q)
	while(q--)
    {
		int x;
        c(x) 
        x--;
		cout << s[x % n] + t[x % m] << endl;
	}
    return 0;
}