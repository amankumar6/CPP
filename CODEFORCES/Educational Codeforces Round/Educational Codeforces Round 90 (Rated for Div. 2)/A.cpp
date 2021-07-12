#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b,c,xa(0),xb(0),t,count=0;
    cin>>t;
    while (t--)
    {
        cin>>a>>b>>c;
        if (a>=c)
        {
            cout<<"-1 "<<b<<endl;
        }
        if (a<c)
        {
            if (a*b<=c)
            {
                cout<<"1 -1"<<endl;
            }
            else
            {
                cout<<"1 "<<b<<endl;
            }
        }
    }
    
    return 0;
}