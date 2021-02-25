#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans(0);
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            ans++;
        }
        if (arr[i]<min)
        {
            min=arr[i];
            ans++;
        }        
    }
    
    cout<<ans;
    return 0;
}