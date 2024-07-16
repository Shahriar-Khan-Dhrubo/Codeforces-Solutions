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
        int ans;
        string s;
        cin>>s;
        int cnt0=count(s.begin(),s.end(),'0');
        int cnt1=count(s.begin(),s.end(),'1');
        if(s.size()==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        if(cnt0==cnt1)
        {
            cout<<"0"<<endl;
            continue;
        }
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(cnt0>0)
                    cnt0--;
                else
                    break;
            }
            else
            {
                if(cnt1>0)
                    cnt1--;
                else
                    break;
            }
        }
        cout<<cnt1+cnt0<<endl;
    }
    return 0;
}

