/*1. Ask a user its name then show numbers one by one up to 15 and ask if it prime or not. If 
the answer is correct give 1 score otherwise 0. Finally, print the score with the name. eg.
 1 is prime?(y/n): n
 2 is prime?(y/n): y
 3 is prime?(y/n): n
Onkesh, your score is 2.
2. Add a new feature in question 1 by adding a limit of maximum 3 wrong answer before the game ends. 
(If the user answered incorrectly 3 times before reaching to 15. Then show Sorry you spent all your lifeline)*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int score=0;
    char check;
    int prime=1;
    int wrong=0;

    cout<<"Enter Your Name: ";
    getline(cin,name);

    for (int i = 3; i <=10; i++)
    {
        cout<<"\n"<<i<<" is prime?(Y/N): "<<endl;
        cin>>check;
        prime=0;
        for (int j = 2; j<i; j++)
        {
            if(i%j==0)
            {

                if(check=='N'  || check=='n' )
                {
                    score++;
                }
                else
                {
                    wrong++;
                }
                
                prime++;
                break;
            }
        }
        if((prime==0 && check=='Y')||(check=='y' && prime==0))
        {
            score++;
        }
        else if((prime==0 && check=='N')||(check=='n' && prime==0))
        {
            wrong++;
        }
        
        if(wrong>=3)
        {
            cout<<"Sorry you spent all your lifeline\n"<<name<<", your score is "<<score<<endl;
            return 0;
        }
            
    }

    cout<<name<<", your score is "<<score<<endl;
    return 0;
}