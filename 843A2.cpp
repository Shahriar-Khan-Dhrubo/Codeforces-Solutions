#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]==s[1] || (s[0]=='b' && s[1]=='a'))
        {
            cout<<s[0]<<" "<<s[1]<<" "<<s.substr(2)<<endl;
        }
        else if(s.size()==3)
        {
            cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
        }
        else
        {
            cout<<s[0]<<" "<<s.substr(1,s.size()-2)<<" "<<s[s.size()-1]<<endl;
        }
    }
    return 0;
}
