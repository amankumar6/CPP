#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6] = {0};
        for (int i = 0; i < 7; i++) cin >> arr[i];

        int s = 0, r = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] == 1)
                s++;
            else
                r++;
        }
        if (s > r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}