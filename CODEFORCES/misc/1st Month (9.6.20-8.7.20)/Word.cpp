#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l(0), u(0);
    int n= s.length();
    for (int i = 0; i < n; i++)
    {
        char c =s[i];
        if (islower(c))
        {
            l++;
        }
        else
        {
            u++;
        }
        
    }
    if (l>=u)
    {
        for (int i = 0; i < n; i++)
        {
            char c =s[i];
            s[i]=tolower(c);
        }
            
    }
    else if(u>l)
    {
        for (int i = 0; i < n; i++)
        {
            char c =s[i];
            s[i]=toupper(c);
        }
            
    }
    cout<<s<<endl;
        

    return 0;
}