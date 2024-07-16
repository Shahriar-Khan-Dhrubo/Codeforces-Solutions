#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool f(const std::pair<int,int> &a,const std::pair<int,int> &b)
{
    return a.second<b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        std::vector<std::pair<int,int>> a(n);
        for(auto &elm:a)
            cin>>elm.first;
        for(auto &elm:a)
            cin>>elm.second;
        sort(a.begin(),a.end(),f);
        long long ans=a[0].first;
        for(auto i=1;i<n;i++)
        {
            ans+=a[i].first+a[i-1].second;
        }
        cout<<ans<<endl;
    }
    return 0;
}
