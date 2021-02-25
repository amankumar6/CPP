#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter the number :";
    cin>>n;
    for (int i = 1; i <=10; i++)
    {
        m=n*i;
        cout<<n<<" * "<<i<<" = "<<m<<endl;
    }
    
    return 0;
}
