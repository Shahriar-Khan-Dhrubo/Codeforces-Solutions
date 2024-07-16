#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x,i,current_sum=0,mx_sum=0,cum_sum=0,ans;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>x;
            cum_sum+=x;
            current_sum=max(x,current_sum+x);
            mx_sum=max(mx_sum,current_sum);
        }
        ans=(cum_sum+mod)%mod;
        //cout<<mx_sum<<endl<<cum_sum<<endl;
        for(i=0;i<k;i++)
        {
            ans=(ans+mx_sum+mod)%mod;
            mx_sum=(mx_sum*2)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}

