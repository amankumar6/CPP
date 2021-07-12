#include <bits/stdc++.h>
using namespace std;

int prime(int num)
{
    bool prime=true;
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            prime=false;
            
            break;
        }
    }
    return prime;
}

int main()
{
    int n,m;
    cin>> n >>m;

    if (prime(n)==true && prime(m)==true)
    {
        for (int j = n+1; j <= m; j++)
        {
            if (prime(j)==true && j==m)
            {
                cout<<"YES"<<endl;
            }
            else if (prime(j)==true && j!=m )
            {
                cout<<"NO";
                break;
            }
            
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
