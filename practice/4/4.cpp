#include<iostream>
using namespace std;
 int main()
 {
    int a,b,c,d,e,f;
    cout<<"-----------------Annual Report Card Generator-----------------"<<endl;
    cout<<"\n";
    cout<< "Enter the Marks of SUB1: ";
    cin>> a;
    if(a>100)
    {
        while (a>100)
        {
            cout<< "Marks can't excceed 100 Re-Enter the Marks of SUB1: ";
            cin>> a;
        }
    }
    cout<< "Enter the Marks of SUB2: ";
    cin>> b;
    if(b>100)
    {
        while (b>100)
        {
            cout<< "Marks can't excceed 100 Re-Enter the Marks of SUB2: ";
            cin>> b;
        }
    }
    cout<< "Enter the Marks of SUB3: ";
    cin>> c;
    if(c>100)
    {
        while (c>100)
        {
            cout<< "Marks can't excceed 100 Re-Enter the Marks of SUB3: ";
            cin>> c;
        }
    }
    cout<< "Enter the Marks of SUB4: ";
    cin>> d;
    if(d>100)
    {
        while (d>100)
        {
            cout<< "Marks can't excceed 100 Re-Enter the Marks of SUB4: ";
            cin>> d;
        }
    }
    cout<< "Enter the Marks of SUB5: ";
    cin>> e;
    if(e>100)
    {
        while (e>100)
        {
            cout<< "Marks can't excceed 100 Re-Enter the Marks of SUB5: ";
            cin>> e;
        }
    }
    f=a+b+c+d+e;
    int per;
    per= f/5;
    cout<<"\n"<<endl;
    cout<< "Your Total Score is "<< f<<" out of 500"<< endl;
    cout<<"Your Percentage is "<< per<<"%"<<endl;
    if (per==40)
    {
        cout<<"You have just passed. You need to Work Hard."<<endl;
    }
    else if (per>40)
    {
        cout<<"You have passed :)"<<endl;
    }
    else
    {
        cout<<"You have Failed. Work Hard and Try Again. Best of Luck!"<<endl;
    }
    cout<<"Best Wishes!"<<endl;
    cout<<"\n";
return 0;    
}
    