#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s1="##",s2="..";
        for(i=2;i<=n;i++)
        {
            if(i%2==0)
                s1+="..";
            else
                s1+="##";
        }
        for(i=2;i<=n;i++)
        {
            if(i%2==0)
                s2+="##";
            else
                s2+="..";
        }
        s1+='\n'+s1;
        s2+='\n'+s2;
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
                cout<<s1<<endl;
            else
                cout<<s2<<endl;
        }
    }
    return 0;
}

