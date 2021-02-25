#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int hotm[n],hotf[n];
        for (int i = 0; i <n; i++)
        {
            cin>>hotm[i];
        }
        for (int i = 0; i <n; i++)
        {
            cin>>hotf[i];
        }
        //sort(hotm,hotm+n);
        //sort(hotf,hotf+n);
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+= hotm[i]*hotf[i];
        }
        cout<<sum<<endl;
        
    }
    return 0;
}