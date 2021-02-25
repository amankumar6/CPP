#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    int input,ans(0);
    for (int i = 0; i < n; i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < k; i++)
    {
        ans+=arr[i];
    }
    cout<<ans;
    return 0;
}