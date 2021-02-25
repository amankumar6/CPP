#include <bits/stdc++.h>
using namespace std;

bool reverse(long long num)
{
    long long r=0;
    long long check;
    check=num;
    while(num>0)
    {
        r=r*10+num%10;
        num/=10;
    }
    if(check==r)
    return true;
    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    long long k[10];
    for (int i = 0; i < t; i++)
    {
        cin>>k[i];
    }
    cout<<endl;
    
    for (int i = 0; i < t; i++)
    {
        while (t>0)
        {
            ++k[i];
            if(reverse(k[i])==true)
            {
                cout<<k[i]<<endl;
                break;
            }
        }
           
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
    int main()
  {
  int t;
  cin>>t;
  string n6;
  getline(cin,n6);
  while(t--)
  {
string n;

getline(cin,n);
int s=0;
int c=n.length();
//for all 9
for(int i=0;i<c;i++)
{
    if(n[i]=='9')
s=s+1;
else
s=s+0;
}
if(s==c)
{
    cout<<1;
    for(int i=1;i<c;i++)
    {
        cout<<0;
    }
    cout<<1<<endl;
continue;
}
//end for all 9
int a[c];
for(int i=0; i<c; i++)
{
    a[c-i-1]=n[c-1-i]-'0';
}
a[c-1]=a[c-1]+1;
if(a[c-1]==10)
{
    int k=0;
    for(int i=c-1;i>0;i--)
    {

        a[c-1-k]=0;
        k++;
        a[c-1-k]=a[c-1-k]+1;


        if(a[c-1-k]!=10)
        break;
}
    }

for(int j=0;j<c/2;j++)
{
    if (a[j]<a[c-j-1])
    {
        a[c-j-2]=a[c-j-2]+1;
        if(a[c-j-2]==10)
        {
            int k=0;
            for(int i=c-j-2;i>=0;i++)
            {
                a[c-j-2-k]=0;
                k++;
                a[c-j-2-k]=a[c-j-2-k]+1;
                if(a[c-j-2-k]!=10)
                break;
            }
        }
    }
else
{
    a[c-j-1]=a[c-j-1];
}
}
        for(int m=0; m<c/2;m++)
        {
            a[c-m-1]=a[m];

        }
for(int v=0;v<c;v++)
{
cout<<a[v];
}
cout<<'\n';
}
return 0;
}