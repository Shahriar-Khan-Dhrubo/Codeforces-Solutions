#include<iostream>
#include<math.h>
using namespace std;
int Min(int a,int b)
{
    return a<b ? a:b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long xa,ya,xb,yb,xc,yc,ans=1;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        long long dxb,dyb,dxc,dyc;
        dxb=xb-xa;
        dyb=yb-ya;
        dxc=xc-xa;
        dyc=yc-ya;
        if(dxb*dxc<=0 && dyb*dyc>=0)
            cout<<ans+Min(abs(dyb),abs(dyc))<<endl;
        else if(dxb*dxc>=0 && dyb*dyc<=0)
            cout<<ans+Min(abs(dxb),abs(dxc))<<endl;
        else if(dxb*dxc>=0 && dyb*dyc>=0)
            cout<<ans+Min(abs(dxb),abs(dxc))+Min(abs(dyb),abs(dyc))<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}
