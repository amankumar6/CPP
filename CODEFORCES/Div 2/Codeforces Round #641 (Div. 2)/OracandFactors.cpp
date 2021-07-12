/*#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int f(int n)
{
    fast;
    int fnn;
    for (int i = 2 ; i <=n; i++)
    {
        if (n%i==0)
        {
            fnn=i;
            break;
        }
    }
    return fnn;
}
int main()
{
    fast;
    int n,t,k;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        for (int i = 1; i <= k; i++)
        {
            n=n+f(n);  
        }
        cout<<n<<endl;
    }
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

bool isPrime(int n)
{
	
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
 
	if (n % 2 == 0 || n % 3 == 0)
		return false;
 
	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
 
	return true;
}
int main()
{
    fast;
    T
    {
        ll n,k,ans=0;
        cin>>n>>k;
        if (isPrime(n)) 
        {
            ans+=n;
            ans+=n;
        }
        else
        {
            int in;
            for (int i = 2; i*i <=n; i++)
            {
                if ((n%i)==0)
                {
                    in=i;
                    break;
                }
            }
            ans+=n;
            ans+=in;
        }
        ans+=(k-1)*2;
        cout<<ans<<endl;
    }
    return 0;
}