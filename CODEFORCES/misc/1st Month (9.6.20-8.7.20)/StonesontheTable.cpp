#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,o(0);
    cin>>n;
    cin>>s;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i]=='R' && s[i+1]=='R'|| s[i]=='G' && s[i+1]=='G' || s[i]=='B' && s[i+1]=='B')
        {
            o++;
        }
        
    }
    cout<<o;
    
    return 0;
}