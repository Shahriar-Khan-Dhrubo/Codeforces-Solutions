#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans,i;
        cin>>n;
        ans=ceil(n/2.0);
        int a=2,b=3*n;
        cout<<ans<<endl;
        for(i=1;i<=ans;i++)
        {
            cout<<a<<" "<<b<<endl;
            a+=3;
            b-=3;
        }
    }
    return 0;
}
