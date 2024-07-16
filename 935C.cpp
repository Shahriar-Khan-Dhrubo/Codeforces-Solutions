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
        int n,i,count1,count0;
        cin>>n;
        string s;
        cin>>s;
        std::vector<std::pair<int,float>> ans;
        count1=count(s.begin(),s.end(),'1');
        count0=count(s.begin(),s.end(),'0');
        if(count0==s.size())
            cout<<n<<endl;
        else if(count1==s.size())
            cout<<"0"<<endl;
        else
        {
            int x=0,y=0;
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='0')
                    x++;
                else
                    y++;
                if(2*x>=(i+1) && 2*(count1-y)>=n-i-1 )
                    ans.push_back({i+1,abs( (float)(n/2.0) -i-1)});
            }
            if(ans.empty())
                cout<<"0"<<endl;
            else
            {
                sort(ans.begin(),ans.end(),[](const auto &a,const auto &b)
                {
                    if(a.second==b.second)
                        return a.first<b.first;
                    else
                        return a.second<b.second;
                } );
                if((count1>=(n+1)/2 && ans[0].first==n))
                    cout<<"0"<<endl;
                else
                    cout<<ans[0].first<<endl;
            }
        }
    }
    return 0;
}
