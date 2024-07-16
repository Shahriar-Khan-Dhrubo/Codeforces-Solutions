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
        int n;
        cin>>n;
        std::vector<int> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        int ans=a[n-1]-a[0];
        for(i=1;i<n;i++)
            ans=max(ans,a[i]-a[0]);
        for(i=0;i<n-1;i++)
            ans=max(ans,a[n-1]-a[i]);
        for(i=1;i<n;i++)
            ans=max(ans,a[i-1]-a[i]);
        cout<<ans<<endl;
    }
}
