#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,ans=0;
        cin>>a>>b>>c;
        if(b%3!=0 && (b%3)+c<3)
            cout<<"-1\n";
        else
        {
            ans=ceil((b+c)/3.0);
            cout<<a+ans<<endl;
        }

    }
    return 0;
}
