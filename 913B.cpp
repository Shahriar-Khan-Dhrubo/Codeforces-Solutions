#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i,j,k,x,y,z,m,n,o,p;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        std::stack<int> upper,lower;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
                upper.push(i);
            else if(s[i]>='a' && s[i]<='z' && s[i]!='b')
                lower.push(i);
            if(s[i]=='B' && !upper.empty())
            {
                s[upper.top()]='$';
                upper.pop();
            }
            if(s[i]=='b' && !lower.empty())
            {
                s[lower.top()]='$';
                lower.pop();
            }
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='$')
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

