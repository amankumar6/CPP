#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[100],b[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < m; i++)
    {
        auto ans=upper_bound(a,a+n,b[i]);
        if ((ans-a)<=n) 
        {
            cout<<(ans-a)<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    return 0;
}