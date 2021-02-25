#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b,c,s;
    cin>>a>>b>>c;
    s=a+b;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    if (s==c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}