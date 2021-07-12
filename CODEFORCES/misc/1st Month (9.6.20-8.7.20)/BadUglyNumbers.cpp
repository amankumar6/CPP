#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)


int main()
{
    fast;
    T{
        int n;
        cin>>n;
        if (n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"2";
            for (int i = 0; i < n-1; i++)
            {
                cout<<"3";
            }
            cout<<endl;
        }
    }
    return 0;
}