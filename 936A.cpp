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
        int n,i,median,ans;
        cin>>n;
        std::vector<int> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        median=ceil(n/2.0);
        ans=count(a.begin()+median-1,a.end(),a[median-1]);
        cout<<ans<<endl;
    }
    return 0;
}
