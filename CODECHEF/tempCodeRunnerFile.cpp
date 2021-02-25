#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    double y,ans;
    cin>>x>>y;
    if (x%5==0 && x+0.50<y)
    {
        ans=y-x-0.50;
        cout<<fixed<<setprecision(2)<<ans;
    }
    else
    {
        cout<<fixed<<setprecision(2)<<y;
    }
    return 0;
}