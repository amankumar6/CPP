/*Ask the user full name, dob, bank name, mob no as a/c no, address 
and initialise money with ₹1000. Then show the user options for 
1. withdrawal
2. deposit
3. show details
4. exit
till user wants
(There are 3 fn withdrawal, deposit, show details. If withdrawal money 
is greater then current money show error message Insufficient Balance)
*/

#include <iostream>
using namespace std;

int main()
{
    int dob,ac,n;
    double current,withdraw,deposit;
    current=1000;
    string name;
    string bank;
    string address;

    cout<<"Enter Your Name: "<<endl;
    getline(cin,name);

    cout<<"Enter your Bank Name: "<<endl;
    getline(cin,bank);

    cout<<"Enter your Address: "<<endl;
    getline(cin,address);

    cout<<"Enter DOB(DDMMYYYY): "<<endl;
    cin>>dob;

    cout<<"Enter your Mobile Number as Account Number: "<<endl;
    cin>>ac;
    
    cout<<"Your Current Balance is Rs "<<current<<endl;
    
    do
    {
        cout<<"1.Withdraw \n2.Deposit\n3.Show Details\n4.Exit"<<endl;
        cin>>n;
        if (n==1)
        {
            cout<<"Enter the amount you wnat to withdraw: "<<endl;
            cin>>withdraw;
            if (current<withdraw)
            {
                cout<<"Insufficient Balance"<<endl<<endl;;
            }
            else
            {
                current=current-withdraw;
                cout<<"Rs "<<withdraw<<" has been succefully withdraw"<<endl;
                cout<<"Your Current Balance is Rs "<<current<<endl<<endl;
            }
        }
        else if (n==2)
        {
            cout<<"Enter the Amount you want to deposit: "<<endl;
            cin>>deposit;
            current=current+deposit;
            cout<<"Rs"<<deposit<<" has been succefully Depossit"<<endl;
            cout<<"Your Current Balance is Rs "<<current<<endl<<endl;
        }
        else if (n==3)
        {
            cout<<"Your Name is "<<name<<"\nYour DOB is "<<dob<<"\nYour Bank Name is "<<bank<<"\nYour Account number is "<<ac<<"\nYour Address is "<<address<<"\nYour Current Balance is Rs "<<current<<endl<<endl;
        }
        else if (n==4)
        {
            cout<<"Thank You"<<endl;
            return 0;
        }
        else 
        {
            cout<<"Enter Correct Option"<<endl<<endl;
        }

    } while (n!=4);
 
return 0;
}