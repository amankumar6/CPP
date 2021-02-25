#include<bits/stdc++.h>
using namespace std;

int reverse(long num)
{
    int r=0;
    while(num>0)
    {
        r=r*10+num%10;
        num/=10;
    }
    return r;
}

int main()
{
    int t;
    cin>>t;
    int k[10];
    for (int i = 0; i < t; i++)
    {
        cin>>k[i];
    }
    cout<<endl;

    for (int i = 0; i < t; i++)
    {
        while (1)
        {
            k[i]++;
            int n;
            n=reverse(k[i]);
            if(k[i]==reverse(k[i]))
            {
                cout<<k[i]<<endl;
                break;
            }
        }
        
    }
    return 0;
}