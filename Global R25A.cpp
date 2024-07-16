#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1="YES",s2="NO";
        cin>>s;
        if(s=="0" || s=="00")
            cout<<s1<<endl;
        else if(count(s.begin(),s.end(),'1')%2!=0)
            cout<<s2<<endl;
        else if(count(s.begin(),s.end(),'1')==2)
        {
            if(s.find("11")!=string::npos)
                cout<<s2<<endl;
            else
                cout<<s1<<endl;
        }
        else
            cout<<s1<<endl;
    }
    return 0;
}
