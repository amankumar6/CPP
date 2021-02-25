#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,t;
    cin>>s>>t;
    ll count=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=t[i])
        {
            count++;
        }
    }
    cout<<count;
    
    return 0;
}