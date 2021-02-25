#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    int n,x,count=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x==0)
        {
            count++;
        }
    }
    if (count==n)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }
    
    
    
    return 0;
}