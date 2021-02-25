/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool f(int x, int y)
{
    return x>y;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a;
        ll input,ans1(0),ans2(0),ans(0);
        for (ll i = 0; i < n; i++)
        {
            cin>>input;
            a.push_back(input);
        }
        ll w[k],max,min;
        for (ll i = 0; i < k; i++)
        {
            cin>>w[i];
            if (w[i]==1)
            {
                sort(a.begin()+1,a.end()+1,f);
                ans+=a[0]*2;
                a.erase(a.begin()+0);
            }
            else if(w[i]>1)
            {
                sort(a.begin()+1,a.end()+1);
                ans1=a[0];
                a.erase(a.begin()+0);

                sort(a.begin()+1,a.end()+1,f);
                ans2=a[0];
                a.erase(a.begin()+0);

                ans+=ans1+ans2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(ll i=a;i<=n;i++)
#define f_(i,a,n) for(ll i=a;i>=n;i--)
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,k,sum=0;
    cin>>n>>k;
    ll a[n+1];
    ll b[k+1];
    a[0]=0;
    b[0]=0;
    f(i,1,n)
    cin>>a[i];
    ll s=n;
    sort(a+1,a+n+1);
    f(i,1,k)
    {
      cin>>b[i];
      b[i]=b[i]-1;
    }
    sort(b+1,b+k+1);
    f(i,1,k)
    {
        sum+=a[s];
        if(b[i]==0)
        sum+=a[s];
        s--;
    }
    ll m=n;
    n=n-k;
    ll c=1;
    while(n>0)
    {
      if(b[c]>0)
      {
        sum+=a[n-b[c]+1];
        n=n-b[c];
      }
      c++;
    }
    cout<<sum<<endl;
  }
}