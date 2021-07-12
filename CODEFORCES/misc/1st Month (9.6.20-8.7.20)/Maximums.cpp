#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)
#define c(a) cin>>a;

int main()
{
    fast;
    int n;
    c(n)
    int arr[n],x=0;
    for (int  i = 0; i < n; i++)
    {
        c(arr[i])
        arr[i] += x;
        x=max(x,arr[i]);
        cout<<arr[i]<<" ";
    }
    
    return 0;
}