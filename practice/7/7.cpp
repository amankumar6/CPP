#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=1;
    cout<<"Enter the number: ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        x=x*i;
    }
    cout<<"Factorial of "<<n<<" is "<<x<<endl; 
    return 0;
}
