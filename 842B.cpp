#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int ordered=0;
        cin>>n>>k;
        std::vector<int> a(n);
        for(auto i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==ordered+1)
                ordered++;
        }
        double ans=ceil((double)(n-ordered)/k);
        cout<<ans<<endl;
    }
    return 0;
}
