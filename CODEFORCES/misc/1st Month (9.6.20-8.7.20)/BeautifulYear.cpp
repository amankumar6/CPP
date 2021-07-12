#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin>> i;
    while(1)
    {
        i+=1;
        int a,b,c,d;
        a=i/1000;
        b=i/100 % 10;
        c=i/10 % 10;
        d=i%10;
        if (a!=b && b!=c && c!=d && a!=c && a!=d && b!=d)
        {
            cout<<i<<endl;
            break;
        }
    }
   
    return 0;
}