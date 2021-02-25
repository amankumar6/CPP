#include<iostream>

using namespace std;
int main()
{
    //char a[50]; 
    string a;
    cout<<"Enter what you want to print: ";
    //cin.get(a,50);
    getline(cin,a);
    int b;
    cout<<"Enter the Number of times you want to print that: ";
    cin>>b;
    for (int i = 1; i <=b ; i++)
    {
        cout<<a<<endl;   
    }
    return 0;
}