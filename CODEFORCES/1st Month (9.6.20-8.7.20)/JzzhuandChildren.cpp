#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast;
    int n,m,last;
    double t,max=0;
    cin>>n>>m;
    for (int i = 1; i <=n; i++)
    {
        cin>>t;
        if (ceil(t/m)>=max)
        {
            last=i;
            max=ceil(t/m);
        }
        
    }
    cout<<last;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast;
    int n,m;
    cin>>n>>m;
    int arr[n],count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i]>m)
        {
            cout<<i+1<<endl;
            count++;
            break;
        }
    }
    if (count==0)
    {
        cout<<n<<endl;
    }
    return 0;
}*/