#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int y=0;
    int x=n.length();
    for (int i = 0; i < x; i++)
    {
       
        if (n[i]=='4' || n[i]=='7')
        {
            y++;
        }
        
    }
    if ( y==4 || y==7)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    return 0;
}