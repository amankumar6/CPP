#include <bits/stdc++.h>
using namespace std;

int main()
{
    string words[] = {"mass", "as", "hero", "supperhero"};
    long long int numberofelements = sizeof(words) / sizeof(words[0]);
    for (long long int i = 0; i < numberofelements; i++)
        for (long long int k = i + 1; k < numberofelements; k++)
            if (words[k].find(words[i]) != string::npos)
                cout << words[i] << " ";

    for (long long int i = numberofelements - 1; i >= 0; i--)
        for (long long int k = numberofelements - 2; k >= 0; k--)
            if (words[k].find(words[i]) != string::npos && words[k] != words[i])
                cout << (words[i]) << " ";
    
    return 0;
}