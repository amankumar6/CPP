#include <bits/stdc++.h>
#define ll long long int

using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        int n, l, x, diff;
        cin >> n >> l >> x;
        diff = n - l;
        cout << min(diff, l) * x << endl;
    }
    return 0;
}
 
