#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll div=n,rem=0;
    string s;
    char c;
    while(1)
    {
        rem=(div-1)%26;
        div=(div-1)/26;
        c=(char)(97+rem);
        s.push_back(c);
        if (div==0)
        {
            break;
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,n) for(ll i=a;i<=n;i++)
#define f_(i,a,n) for(ll i=a;i>=n;i--)
char ita(int i)
{
   return static_cast<char>('a' + i);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
    ll n,m,j=1,count=0;
    cin>>n;
    m=n-1;
    if(n==1)
    cout<<'a'<<endl;
    else
      {
      while(m>0)
      {
        j=j*26;
        count++;
        if(m==j)
        {
          f(i,0,count)
          cout<<'a';
          break;
        }
        if(m/j>0)
        {
          m=m-j;
        }
        else
        {
          n=m;
          m=0;
        }
      }
      if(m!=0)
      {
        cout<<endl;
        return 0;
      }
      m=n;
      j=j/26;
      ll k=0;
      while(j>1)
      {
        k=m/j;
        m=m%j;
        cout<<ita(k);
        j=j/26;
      }
      cout<<ita(m)<<endl;
  }
}
*/