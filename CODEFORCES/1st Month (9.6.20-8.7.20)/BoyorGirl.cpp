#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int l;
    cin>>s;
    int count=1;
    l=s.length();
    sort(s.begin(),s.end());
    for (int i = 0; i < l-1; i++)
    {
        if(s[i]!=s[i+1])
        count++;
    }
    if(count%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
    return 0;
}