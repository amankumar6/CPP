#include <bits/stdc++.h> 
using namespace std; 
 
int prime(int n) 
{ 

    for (int i = 3; i*i <= n; i += 2) { 
        if (n % i == 0)
        {
            n=i;
            break;
        }
         
    }
    return n; 
} 
int main() 
{ 
    int n;
    do
    {
        cin>>n;
        if(n==0)
        break;
        cout << prime(n)<<endl;

    } while (n!=0);
    return 0; 
} 