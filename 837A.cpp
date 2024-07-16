#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,lower=0,upper=0;
        long long ans;
        cin>>n;
        std::vector<int> a(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        std::sort(a.begin(),a.end());
        lower=count(a.begin(),a.end(),a.front());
        upper=count(a.begin(),a.end(),a.back());
        if(lower==n || upper==n)
            ans=(long long)lower*(upper-1);
        else
            ans=(long long)lower*upper*2;
        cout<<ans<<endl;
    }
    return 0;
}
