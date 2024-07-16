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
        int N,a,b,ans;
        cin>>N>>a>>b;
        if(b>2*a)
            cout<<N*a<<endl;
        else
        {
            if(N%2==0)
                ans=(N/2)*b;
            else
                ans=(N/2)*b+a;
            cout<<ans<<endl;
        }

    }
    return 0;
}
