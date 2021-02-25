#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,count(0);
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a>0 && b>0 && c>0 || a>0 && b>0 || a>0 && c>0 || b>0 && c>0)
        {
            count++;
        }
    }
    cout<<count;
    
    return 0;
}