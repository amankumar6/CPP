#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,d,k,ans=0;
        cin>>n>>k;
        d=k;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='1')
            {
                if (d<k)
                {
                    ans--;
                }
                d=0;
            }
            else
            {
                d++;
                if (d==k+1)
                {
                    ans++;
                    d=0;
                }
            }  
        }
        cout<<ans<<endl;
    }
    return 0;
}