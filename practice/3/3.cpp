#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<< "Enter the Number :";
    cin>> a;

    if (a%2==0)
    {
        cout<<"The Number is Even";
    }
    else if(a%2!=0)
    {
        cout<<"The Number is Odd";
    }
    return 0;
}