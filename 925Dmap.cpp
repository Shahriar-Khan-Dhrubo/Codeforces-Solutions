#include<iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,i;
        cin>>n>>x>>y;
        long long ans=0;
        std::vector<int> a(n);
        std::map<std::pair<int,int>,int> mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            ans+=mp[{(x-a[i]%x)%x,a[i]%y}];
            mp[{a[i]%x,a[i]%y}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
