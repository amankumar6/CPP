#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    
    cin>>n>>l;
    string p;
    vector<string> s(t);
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    
    cout<<p<<endl;

    return 0;
}