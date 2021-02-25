#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans(0);
    cin>>n;
    int a[n],b[n],t[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        t[0]=b[0]-a[0];
        t[i+1]=t[i]+b[i+1]-a[i+1];
    }
    sort(t,t+n);
    ans=t[n-1];
    cout<<ans<<endl;
    return 0; 
}