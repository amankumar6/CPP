#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,count=0,temp=0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<=k)
        {
            count++;
            temp++;
        }
        else
        {
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i]<=k)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if (temp==n)
    {
        cout<<count/2<<endl;
    }
    else
    cout<<count<<endl;
    return 0;
}