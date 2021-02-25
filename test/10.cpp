#include <bits/stdc++.h>
using namespace std;
bool square(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i*i==num)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,a1,b1,a2,b2;
    cin>>t;
    while (t--)
    {
        cin>>a1>>b1;
        cin>>a2>>b2;
        int area=((a1*b1)+(a2*b2));
        if(square(area))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}