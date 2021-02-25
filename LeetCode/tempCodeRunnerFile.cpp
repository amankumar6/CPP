#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    string s;
    cin>>s;
    int x=0,y=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='N')
        {
            y+=1;
        }
        if (s[i]=='S')
        {
            y-=1;
        }
        if (s[i]=='E')
        {
            x+=1;
        }
        if (s[i]=='W')
        {
            x-=1;
        }
        if (x==0 && y==0)
        {
            cout<<"True"<<endl;
            break;
        }
    }
    return false;
}