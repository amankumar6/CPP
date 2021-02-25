#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,x;
    long int ans=0;
    cin>>n;
    while (n--)
    {
        cin>>x;
        ans= (x*2)+3*(x*(x-1) -((x*(x-1)/2)));
        cout<<ans<<endl;
    }
    return 0;
}