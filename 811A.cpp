#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,H,M,hh,vl,res=1e9,i;
        cin>>n>>H>>M;
        vl=H*60+M;
        for(i=1;i<=n;i++)
        {
            int x,y;
            cin>>x>>y;
            hh=x*60+y;
            if(hh>=vl)
                res=min(res,hh-vl);
            else
                res=min(res,24*60-vl+hh);
        }
        cout<<res/60<<" "<<res%60<<endl;
    }
}
