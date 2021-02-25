#include <bits/stdc++.h>
using namespace std;

bool palin(long);
int main()
{
long arr[10],i,n,m;
cin>>m;

for(i=0;i<m;i++)
{
    cin>>arr[i];
}

cout<<"\n";

for(i=0;i<m;i++)
{
      //n=i;
      while (palin(++arr[i])==false);
      cout<<arr[i]<<endl;
      //i=n;
}
return 0;
}

bool palin(long num)
{
long d, check, rev=0;
check=num;
do{
d=num%10;
rev= (rev*10)+d;
num=num/10;
}while(num!=0);

if(check==rev)
    return true;
else
    return false;
}