#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    if (isupper(s[0]))
    {
        cout<<"A";
    }
    if(islower(s[0]))
    {
        cout<<"a";
    }
    
    
    return 0;
}