#include <bits/stdc++.h>
#define ffs ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define lolol          \
    int test_cases;    \
    cin >> test_cases; \
    while (test_cases--)

using namespace std;

int main()
{
    ffs;
    lolol{
        long long int m;
        cin>>m;
        long long int ans = 1;
        if(m-2>=0) ans += (m-1)*(m-2);
        cout<<ans<<"\n";
    }
    return 0;
}