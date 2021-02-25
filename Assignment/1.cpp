#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str,ans;
    cin >> str;
    long long int x = 0;
    for (long long int i = 0; i < str.length(); i++)
        (str[i] >= '0' && str[i] <= '9') ? ans += str[i] : " ";

    stringstream finalAns(ans);
    finalAns >> x;
    for (long long int i = 0; i < str.length(); i++)
    {
        if (str[i] == '-')
        {
            cout << -x << endl;
            return 0;
        }
        else
        {
            cout << x << endl;
            return 0;
        }
    }
}
