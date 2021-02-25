/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double u,v,w,U,V,W;
    cin>>t;
    while(t--)
    {
        cin>>u>>v>>w>>U>>V>>W;
        double uPow,vPow,wPow,UPow,VPow,WPow,result;
        uPow = pow(u, 2); 
        vPow = pow(v, 2); 
        wPow = pow(w, 2); 
        UPow = pow(U, 2); 
        VPow = pow(V, 2); 
        WPow = pow(W, 2); 
        result = sqrt(4 * (uPow * vPow * wPow) 
        - uPow * pow((vPow + wPow - UPow), 2) 
        - vPow * pow((wPow + uPow - VPow), 2) 
        - wPow * pow((uPow + vPow - WPow), 2) 
        + (vPow + wPow - UPow) * (wPow + uPow - VPow) 
        * (uPow + vPow - WPow)); 
        result/=12;
        cout<<fixed<<setprecision(4)<<result<<endl<<endl;
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double u,v,w,U,V,W;
    int t=0;
    cin>>t;
    while(t--)
    {
        cin>>u>>v>>w>>W>>V>>U;
        double a,b,c,d,x,y,z,X,Y,Z;
        X=(w-U+v)*(U+v+w);
        x=(U-v+w)*(v-w+U);
        Y=(u-V+w)*(V+w+u);
        y=(V-w+u)*(w-u+V);
        Z=(v-W+u)*(W+u+v);
        z=(W-u+v)*(u-v+W);
        a=sqrt(x*Y*Z);
        b=sqrt(y*Z*X);
        c=sqrt(z*X*Y);
        d=sqrt(x*y*z);
        double vol=(b+c+d-a)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d);
        vol=sqrt(vol)/(192*u*v*w);
        cout<<fixed<<setprecision(4)<<vol<<endl;
    }
    return 0;
}   
