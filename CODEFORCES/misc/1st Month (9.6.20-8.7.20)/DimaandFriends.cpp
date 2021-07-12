#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast;
    int n,temp=0,ans=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        temp+=arr[i];
    }
    for (int i = 1; i <=5; i++)
    {
        if ((temp+i)%(n+1)!=1)
        {
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}