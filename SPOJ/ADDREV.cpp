#include <bits/stdc++.h>
using namespace std;

int reverse(int num)
{
    int r=0;
    while(num>0)
    {
        r=(r*10)+(num%10);
        num/=10;
    }
    return r;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num1,num2;
        cin>>num1>>num2;
        cout<<reverse(reverse(num1)+reverse(num2))<<endl;
    }
    return 0;
}