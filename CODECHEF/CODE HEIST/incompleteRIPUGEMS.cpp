#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<arr[n-2]*arr[n-1]<<" ";
        for (int i = 0; i < n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}