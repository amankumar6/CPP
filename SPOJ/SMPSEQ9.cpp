#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s,q;
    double sum1=0,sum2=0;
    cin>>s;
    double arr1[s];
    for (int i = 0; i < s; i++)
    {
        cin>>arr1[i];
        sum1+=arr1[i];
    }
    sum1=sum1/s;
    cin>>q;
    double arr2[q];
    for (int i = 0; i < q; i++)
    {
        cin>>arr2[i];
        sum2+=arr2[i];
    }
    sum2/=q;
    if (sum1>sum2)
    {
        for (int i = 0; i < s; i++)
        {
            cout<<arr1[i]<<" ";
        }
    }
    else
    {
        for (int i = 0; i < q; i++)
        {
            cout<<arr2[i]<<" ";
        }
    }
    
    return 0;
}