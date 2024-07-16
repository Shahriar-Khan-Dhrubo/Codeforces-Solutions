#include<bits/stdc++.h>
using namespace std;
long long Gcd(long long a,long long b)
{
    return b==0 ? a : Gcd(b,a%b);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i;
    cin>>t;
    while(t--)
    {
        long long a,b,gcd,lcm;
        cin>>a>>b;
        if(a==1)
            cout<<b*b<<endl;
        else if(b%a!=0)
        {
            gcd=Gcd(a,b);
            lcm=(a*b)/gcd;
            cout<<lcm<<endl;
        }
        else if(b%a==0)
            cout<<b*(b/a)<<endl;
    }
    return 0;
}

