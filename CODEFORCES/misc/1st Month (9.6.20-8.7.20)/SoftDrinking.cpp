#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total= (k*l)/nl;
    int x=c*d;
    int pp=p/np;
    if (total<=pp && total<=x)
    {
        cout<<total/n;
    }
    else if(pp<=total && pp<=x)
    cout<<pp/n;
    else if (x<=total && x<=pp)
    {
        cout<<x/n;
    }
    return 0;
}