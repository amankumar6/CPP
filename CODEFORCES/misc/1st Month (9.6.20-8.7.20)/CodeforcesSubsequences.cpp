#include <bits/stdc++.h>
#define int long long
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define vi vector<int>
#define vstr vector<string>
#define vdb vector<double>
#define vbool vector<bool>
#define vvi vector<vector<int> >
#define mii map<int,int>
#define pb push_back
#define pii pair<int,int>
#define vpair vector<pii > 
#define mkp make_pair
#define scan(a,n) for(int i =0 ; i<n ; i++) cin>>a[i]
#define print(a,n) for(int i = 0 ; i < n ; i++) {cout<<a[i]<<' ';}cout<<'\n'
#define mem(a,v) memset(a,v,sizeof(a))
#define loop(i,a,b) for (int i = a; i < b; i++)
#define loope(i,a,b) for (int i = a; i <= b; i++)
#define bloop(i,a,b) for(int i = a;i>=b;i--)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define PRECISION std::cout.unsetf ( std::ios::fixed );std::cout.precision(9)
#define PI 3.14159265
#define S second
#define F first
#define CHECK cout<<"CHEDEDWB"<<endl
#define CHECK1(a) cout<<a<<endl
#define CHECK2(a,b) cout<<a<<' '<<b<<endl;
#define br '\n'
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(),x.end()
using namespace std;
int mod = 1e9+7;
int inf = 1e18;
int m_inf = INT_MIN;
 
int power(int a,int b) {
	if(b == 1) return a;
	if(b == 0) return 1;
	int m1 = power(a,b/2);
	if(b%2) return m1*m1*a;
	return m1*m1;
}
 
int32_t main() 
{
	FastIO; PRECISION;
	int t = 1;
	string str = "codeforces";
	while(t--)
	{
		int k;
		cin>>k;
		int i = 0;
		while(power(i,10) < k)
		{
			i++;
		}
		int q;
		for(q = 10;q>=0;q--)
		{
			if(power(i,q)*power(i-1,10-q) < k)
			{
				q++;
				break;
			}
		}
		string ans;
		// cout<<i<<' '<<q<<endl;
		loop(j,0,q)
		{
			loop(x,0,i)
			{
				ans+=str[j];
			}
		}
		// cout<<ans<<endl;
		loop(j,q,10)
		{
			loop(x,0,i-1)
			{
				ans+=str[j];
			}
		}
		cout<<ans<<'\n';
		
	}
    
}
