#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,ng,nm,i;

    cin>>t;
    while (t--)
    {
        cout<<endl;
        cin>>ng>> nm;
        int pg[ng],pm[nm];

        for (i = 0; i < ng; i++)
        {
            cin>>pg[i];
        }
        for (i = 0; i < nm; i++)
        {
            cin>>pm[i];
        }
        for (i = 1; i < ng; i++)
        {
            if(pg[0]<pg[i])
            pg[0]=pg[i];
        }
        for (i = 1; i < nm; i++)
        {
            if(pm[0]<pm[i])
            pm[0]=pm[i];
        }
        //sort(pg,pg+ng);
        //sort(pm,pm+nm);

        if(pg[0]>=pm[0])
        {
            cout<<"Godzilla"<<endl;
        }
        else
        {
            cout<<"MechaGodzilla"<<endl;
        }
    }
    return 0;
}