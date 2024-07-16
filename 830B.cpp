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
        int n,ans=0,i,check=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=1;i<s.size();i++)
        {
            if(check==1 && (s[i]!=s[i-1]))
                ans++;
            else if(s[i]=='0' && s[i-1]=='1')
            {
                check=1;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
