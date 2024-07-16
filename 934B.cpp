#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,x=0,y=0;
        cin>>n>>k;
        std::vector<int> a(2*n);
        for(i=0;i<2*n;i++)
            cin>>a[i];
        std::vector<int> b(n+1);
        std::fill(b.begin(),b.end(),0);
        for(i=0;i<n;i++)
        {
            b[a[i]]++;
        }
        std::vector<int> l(n);
        std::vector<int> r(n);
        for(i=1;i<=n;i++)
        {
            if(b[i]==2)
            {
                l[x++]=i;
                l[x++]=i;
            }
            else if(b[i]==0)
            {
                r[y++]=i;
                r[y++]=i;
            }
           // if(x==2*k &&y ==2*k)
               // break;
        }
        for(i=1;i<b.size();i++)
        {
            if(b[i]==1)
            {
                l[x++]=i;
                r[y++]=i;
            }
        }
        //cout<<x<<" "<<y<<endl;
        for(i=0;i<2*k;i++)
            cout<<l[i]<<" ";
        cout<<endl;
        for(i=0;i<2*k;i++)
            cout<<r[i]<<" ";
        cout<<endl;
    }
    return 0;
}
