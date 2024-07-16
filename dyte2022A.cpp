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
        int n,k,i,j;
        cin>>n>>k;
        string s;
        cin>>s;
        std::array<int,26> f={0};
        for(i=0; i<s.size(); i++)
        {
            char ch=s[i];
            f[ch-'a']++;
        }
        string ans;
        for(i=0; i<k; i++)
        {
            for(j=0;j<n/k; j++)
            {
                if(f[j]==0)
                {
                    ans+=(j+97);
                    break;
                }
                else
                {
                    f[j]--;
                }
                if(j==n/k -1)
                    ans+=(j+98);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
