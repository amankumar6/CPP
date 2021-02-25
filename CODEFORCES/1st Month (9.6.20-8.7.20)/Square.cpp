#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,a1,b1,a2,b2;
    cin>>t;
    while (t--)
    {
        cin>>a1>>b1>>a2>>b2;
        if(min(a1,b1)+min(a2,b2)==max(a1,b1) && max(a1,b1)==max(a2,b2))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}