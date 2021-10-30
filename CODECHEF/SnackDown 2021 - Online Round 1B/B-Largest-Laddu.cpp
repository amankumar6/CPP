#include <bits/stdc++.h>
using namespace std;

long long int myFunction(long long int a, long long int b)
{
    long long int ret = 1;
    for (long long int iv = 0; iv < b; iv++)
        ret *= a;
    return ret;
}

// For Solution: https://t.me/CompetitiveProgramming69

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int tr = 1;
    cin >> tr;
    while (tr--)
    {
        long long int newnew, flagHaiBro = 1;
        cin >> newnew;
        newnew = myFunction(2, newnew);
        vector<long long> vectorvectorhai(newnew);
        for (long long int iv = 0; iv < newnew; iv++)
            cin >> vectorvectorhai[iv];
        sort(vectorvectorhai.begin(), vectorvectorhai.end());
        while (vectorvectorhai.size() > 1)
        {
            vector<long long> tempThoTempHai;
            long long int abhiWala = vectorvectorhai[0], abhiJoChalRahaHaiUskaSum = 0;
            for (long long int i = 0; i < vectorvectorhai.size(); i += 2)
            {
                if ((abs(vectorvectorhai[i] - abhiWala) <= 1) && (abs(vectorvectorhai[i + 1] - abhiWala) <= 1))
                    abhiJoChalRahaHaiUskaSum += vectorvectorhai[i] + vectorvectorhai[i + 1];
                else
                {
                    abhiWala = vectorvectorhai[i];
                    tempThoTempHai.push_back(abhiJoChalRahaHaiUskaSum);
                    abhiJoChalRahaHaiUskaSum = 0;
                    if (abs(vectorvectorhai[i] - vectorvectorhai[i + 1]) <= 1)
                        abhiJoChalRahaHaiUskaSum += vectorvectorhai[i] + vectorvectorhai[i + 1];
                    else
                    {
                        flagHaiBro = 0;
                        break;
                    }
                }
            }
            tempThoTempHai.push_back(abhiJoChalRahaHaiUskaSum);
            if (flagHaiBro == 0)
                break;

            else
            {
                vectorvectorhai.clear();
                for (auto ic : tempThoTempHai)
                    vectorvectorhai.push_back(ic);
            }
        }

        if (flagHaiBro)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
