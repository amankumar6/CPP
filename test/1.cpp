#include<iostream>
using namespace std;
class ok
{
    public:
    void as()
    {
        int b;
        int a;
        cout<<"Enter a:"<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
        int sum;
        sum= a+b;
        cout<< "Sum is:"<<sum<<endl;

    }

};
void as(int a=10)
{
    cout<<a<<"\nBye";

}
int main()
{
    ok hh;
    hh.as();
    as();
    return 0;
}
