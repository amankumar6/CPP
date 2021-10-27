#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--){
        ll newNew,kkkk;
        cin>>newNew>>kkkk;

        ll arara[newNew*newNew];
        for(ll i=0; i<newNew*newNew; i++)
            cin>>arara[i];
        
        sort(arara, arara + newNew*newNew);
        ll cscd = newNew - (newNew/2);
        cscd *= newNew;

        cout<<arara[newNew*newNew - cscd]<<"\n";
    }
}