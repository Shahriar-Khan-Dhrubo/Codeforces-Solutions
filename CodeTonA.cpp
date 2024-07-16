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
        int n,k;
        cin>>n>>k;
        if(k==n)
        {
            for(i=1;i<=n;i++)
                cout<<"1"<<" ";
            cout<<endl;
        }
        else if(k==1)
        {
            for(i=1;i<=n;i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

