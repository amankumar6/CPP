#include <iostream>
using namespace std;
void prime()
{   
    int n;
    bool prime=true;

    cout<<"Enter a number to check wheter it's prime number or not: "<<endl;
    cin>>n;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            cout<<n<<" is not prime number"<<endl;
            prime=false;
            break;
        }    
    }
    if(prime)
    {
        cout<<n<<" is prime number"<<endl;
    }
}

void cas()
{
    char n;
    cout<<"Do you want to check prime number [Y/N]";
    cin>>n;
    if (n=='Y' || n=='y')
    {
        prime();
        while (n=='Y' || n=='y')
        {
            cout<<"Do you want to check prime number again? [Y/N]";
            cin>>n;
            if (n=='Y'|| n=='y')
            {
                prime();
            }
            else if(n=='N' || n=='n')
            {
                cout<<"\nThank You for using our service\n"<<endl;
            }
            else
            {
                cout<<"You have Choose Wrong Option. Try again!\n";
                cas();    
            }
        }
    }
    else if(n=='N' || n=='n')
    {
        cout<<"\nThank You for using our service\n"<<endl;
    }
    else
    {
        cout<<"You have Choose Wrong Option. Try again!\n";
        cas();    
    }
}

int main()
{
    int a,b;
    int c=0;
    int d=0;
    cout<<"Enter the number from that you want to begin: ";
    cin>>a;
    cout<<"Enter the number from that you want to stop: ";
    cin>>b;
    for (int i = a; i <=b; i++)
    {
        if(i%2==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    cout<<"Total Number of Even Number in the given range is "<<c<<endl;
    cout<<"Total Number of Odd Number in the given range is "<<d<<endl;
    cas();
    return 0;
}