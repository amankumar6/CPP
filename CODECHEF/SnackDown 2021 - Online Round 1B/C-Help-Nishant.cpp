#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        long double teraMera;
        cin >> teraMera;
        long double titu = teraMera;
        teraMera = (long double)sqrt(2 * teraMera + 0.25) - 0.5;
        teraMera = floor(teraMera);
        long double kyaPataAnswerKyaHaiBhai = (teraMera + 1) * teraMera;
        kyaPataAnswerKyaHaiBhai /= 2;
        if (kyaPataAnswerKyaHaiBhai >= titu)
            teraMera--;
        cout << (2 * teraMera + 2) << endl;
    }
    return 0;
}