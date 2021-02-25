#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,zr(0),zl(0),ol(0),oR(0),ansR,ansL;
    cin>>n;
    int right[n],left[n];
    for (int i = 0; i < n; i++)
    {
        cin>>left[i]>>right[i];
        if (left[i]==0)
        {
            zl++;
        }
        else
        {
            ol++;
        }
        if (right[i]==1)
        {
            oR++;
        }
        else
        {
            zr++;
        }        
    }
    if(zr>=oR)
    {
        ansR=oR;
    }
    else
    {
        ansR=zr;
    }

    if(zl>=ol)
    {
        ansL=ol;
    }
    {
        ansL=zl;
    }
    cout<<ansL+ansR<<endl;
    return 0;
}