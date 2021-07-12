#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define T ll t=1; cin>>t; while(t--)
#define c(a) cin>>a;
bool condition1(string s)
{
    int sum=0;
    for (int i = 0; i < s.length(); i++) sum+=s[i];
    if (sum%3==0) return true;
    else return false;
}
bool condition2(string s)
{
    int temp=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]%2==0)
        {
            temp++;
        }
    }
    if (temp>1) return true;
    else return false;
}
bool condition3(string s)
{
    int temp=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='0')
        {
           temp++;
        }
    }
    if (temp>0) return true;
    else return false;
}

int main()
{
    fast;
    T{
        string s;
        c(s)
        if (condition1(s) && condition2(s) && condition3(s)) cout<<"red"<<endl;
        else cout<<"cyan"<<endl;
    }
    return 0;
}