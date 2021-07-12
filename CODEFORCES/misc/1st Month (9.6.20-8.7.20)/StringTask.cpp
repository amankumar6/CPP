#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define c(a) ll a; cin>>a;
#define cs(a) string s; cin>>s;
#define co(a) cout<<a;
#define ci(a) cin>>a;
#define nl cout<<endl;
#define ca(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n) for(ll i=a;i<n-1;i++)
#define f(i,a,n) for(ll i=a;i<n;i++)
#define f1(i,a,n) for(ll i=a;i<=n;i++)
#define f2(i,a,n) for(ll i=a;i>=n;i--)
#define T ll t=1; cin>>t; while(t--)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast;
    /*char s; 
    while(cin>>s)
    {
        if(!strchr("AEIOUYaeiouy",s))
        cout<<'.'<<(char)tolower(s);
    }
    
    */
    cs(s) string temp;
    f(i,0,s.length())
    {
        if (s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u' || s[i]=='Y' || s[i]=='y') temp=s[i]; 
        else
        {
            if (isupper(s[i]))
            {
                s[i]=tolower(s[i]);
                cout<<"."<<s[i];
            }
            else cout<<"."<<s[i];
        }
    }
    return 0;
}
/*It's not who I am underneath, but what I do that defines me

MMMMMMMMMMMMMMMMMMMMM.                             MMMMMMMMMMMMMMMMMMMMM
 `MMMMMMMMMMMMMMMMMMMM           M\  /M           MMMMMMMMMMMMMMMMMMMM'
   `MMMMMMMMMMMMMMMMMMM          MMMMMM          MMMMMMMMMMMMMMMMMMM'
     MMMMMMMMMMMMMMMMMMM-_______MMMMMMMM_______-MMMMMMMMMMMMMMMMMMM
      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
     .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.
    MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                   `MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM'
                          `MMMMMMMMMMMMMMMMMM'
                              `MMMMMMMMMM'
                                 MMMMMM 
                                  MMMM
                                   MM
*/
