/*#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        ll a,b,n,temp1=0,temp2=0;
        cin>>a>>b>>n;
        ll tempa=a;
        ll tempb=b;
        while(n>=a)
        {
            a+=b;
            temp1++;
        }
        a=tempa;
        b=tempb;
        while(n>=b)
        {
            b+=a;
            temp2++;
        }
        cout<<min(temp1,temp2)<<endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        ll a,b,n,count=0;
        cin>>a>>b>>n;
        while (n>=a)
        {
            if(a>b)
            swap(a,b);
            a+=b;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}