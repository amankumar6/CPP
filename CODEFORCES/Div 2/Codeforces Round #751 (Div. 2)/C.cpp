#include "bits/stdc++.h"
using namespace std;

signed main()
{
std::ios::sync_with_stdio(false);
int T=1;
cin>>T;
while(T--)
{
    int n; cin >> n;
    int a[n], h[32];
    memset(h, 0, sizeof h);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        for(int j = 0; j < 31; j++) if((a[i] & (1 << j)) != 0) h[j]++;
    }
    for(int i = 1; i <= n; i++) {
        bool f = 1;
        for(int j = 0; j < 30; j++) {
             if(h[j] % i != 0) f = 0;
        }
        if(f) cout << i << ' ';
    }
    cout << endl;
}
return 0;
}