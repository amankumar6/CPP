#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i]<92)
        {
            s1[i]+=32;
        }
        if (s2[i]<92)
        {
            s2[i]+=32;
        }
    }
    if (s1<s2)
    {
        cout<<"-1";
    }
    else if (s1>s2)
    {
        cout<<"1";
    }
    else if (s1==s2)
    {
        cout<<"0";
    }
    return 0;
}