#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],count(0),count1(0);
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
            if(arr[i]%2!=i%2)
            {
                if(arr[i]%2)
                ++count1;
                else
                ++count;
            }
        }
        if(count!=count1)
        cout<<-1<<"\n";
        else
        cout<<count<<"\n";
    }
    return 0;
}