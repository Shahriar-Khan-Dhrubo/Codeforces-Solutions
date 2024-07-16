#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i;
    cin>>n>>m;
    vector<int> a(n+2);
    a[0]=0,a[n+1]=0;
    for(i=1; i<n+1; i++)
        cin>>a[i];
    vector<long long> cum(n+2);
    cum[0]=0,cum[1]=0,cum[n+1]=0;
    for(i=2;i<n+1;i++)
    {
        if(a[i-1]>a[i])
            cum[i]=cum[i-1]+a[i-1]-a[i];
        else
            cum[i]=cum[i-1];
    }
    std::vector<long long> rcum(n+2);
    rcum[0]=0,rcum[n]=0,rcum[n+1]=0;
    for(i=n-1;i>0;i--)
    {
        if(a[i]<a[i+1])
            rcum[i]=rcum[i+1]+a[i+1]-a[i];
        else
            rcum[i]=rcum[i+1];
    }
    for(i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
            cout<<cum[y]-cum[x]<<endl;
        else
            cout<<rcum[y]-rcum[x]<<endl;
    }
}
