#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> a;
    string s;
    cin >> s;
    while (cin >> s)
    {
        if (a[s])
            cout << s << a[s] << endl;
        else
            cout << "OK" << endl;
        a[s]++;
    }
}