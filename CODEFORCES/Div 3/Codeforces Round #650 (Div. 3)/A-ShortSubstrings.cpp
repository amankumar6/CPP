#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string b,c;
    while (n--)
    {
        cin>>b;
        int l=b.length();
        for (int i = 3; i < l; i+=2)
        {
            c+=b[i];
        }
        cout<<b[0]<<b[1]<<c<<endl;
        c="\0";
    }
  
    
    return 0;
}