#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,n;
    cin>>s;
    int x=s.length();
    for (int i = 0; i < x; i++)
    {
        if (s[i]=='.')
        {
            n+='0';
        }
        if (s[i]=='-' && s[i+1]=='.')
        {
            n+='1';
            ++i;
        }
        
        if (s[i]=='-' && s[i+1]=='-')
        {
            n+='2';
            ++i;
        }
    }
    cout<<n;
    
    return 0;
}