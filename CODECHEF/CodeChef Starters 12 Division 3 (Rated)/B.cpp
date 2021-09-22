#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str = "";

        for (int i = 0; i < n; i++)
            str += "3";

        if (n % 3 == 0)
            str[0] = '6';

        cout << str << endl;
    }

    return 0;
}