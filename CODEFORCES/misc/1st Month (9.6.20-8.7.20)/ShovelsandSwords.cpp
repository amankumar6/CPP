#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<min(min(a,b),(a+b)/3)<<endl;
	}
    return 0;
}