/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    T{
        int n;
        cin>>n;
        if(n%2==0)
        cout<<n/2<<endl;
        else
        cout<<n/2+1<<endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)

int main()
{
    fast;
    int t; cin>>t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i]%2==0)
        {
            cout<<arr[i]/2<<endl;
        }
        else
        cout<<(arr[i]+1)/2<<endl;
    }
    return 0;
}