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
        int n,x,y,match,i,j;
        cin>>n>>x>>y;
        int high=max(x,y);
        match=n-1;
        if( (x!=0 && y!=0) || (x==0 && y==0))
        {
            cout<<"-1"<<endl;
        }
        else if(match%high!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=2; i<=n; i+=high)
            {
                for(j=1; j<=high; j++)
                    cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
