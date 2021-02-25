#include <bits/stdc++.h>
using namespace std;

bool reverse(long long num)
{
    long long r=0;
    long long check;
    check=num;
    while(num>0)
    {
        r=r*10+num%10;
        num/=10;
    }
    if(check==r)
    return true;
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    long long k[10];
    for (int i = 0; i < t; i++)
    {
        cin>>k[i];
    }
    cout<<endl;
    
    for (int i = 0; i < t; i++)
    {
        while (t>0)
        {
            ++k[i];
            if(reverse(k[i])==true)
            {
                cout<<k[i]<<endl;
                break;
            }
        }
           
    }
    return 0;
}
