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

        int n,x,y,i,z;
        long long ans=0;
        cin>>n>>x>>y;
        std::vector<pair<int,int>> a(n);
        for(i=0; i<n; i++)
        {
            cin>>z;
            a[i]= {z%x,z%y};
        }
        sort(a.begin(),a.end());
        for(i=0; i<n; i++)
        {
            int A=(x-a[i].first)%x;
            int B=a[i].second;
            int j=upper_bound(a.begin(),a.begin()+i,make_pair(A,B))-lower_bound(a.begin(),a.begin()+i,make_pair(A,B));
            ans+=j;
        }
        cout<<ans<<endl;
    }
    return 0;
}
