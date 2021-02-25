#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    int n,i=0,day[7];
    cin>>n;
    for (int i = 0; i < 7; i++)
    {
        cin>>day[i];
    }
    int t=day[0];
    while (t<n)
    {
        i++;
        i%=7;
        t+=day[i];
    }
    cout<< i+1 <<endl;

    return 0;
}