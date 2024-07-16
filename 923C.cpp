#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int n,m,k,i;
    while(t--)
    {
        int flag=0,fre1=0,fre2=0;
        cin>>n>>m>>k;
        std::vector<int> ch1,ch2;
        ch1.resize(k+1);
        ch2.resize(k+1);
        std::vector<int> a(n),b(m);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=k)
                ch1[a[i]]++;
        }
        for(i=0; i<m; i++)
        {
            cin>>b[i];
            if(b[i]<=k)
                ch2[b[i]]++;
        }
        for(i=1; i<=k; i++)
        {
            if(ch1[i]==0 && ch2[i]==0)
            {
                flag=1;
                break;
            }
            if(ch1[i]!=0)
                fre1++;
            if(ch2[i]!=0)
                fre2++;
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else if(fre1<k/2 || fre2<k/2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
       /* cout<<fre1<<" "<<fre2<<endl;
        for(auto e: ch1)
            cout<<e<<" ";
        cout<<endl;
        for(auto e: ch2)
            cout<<e<<" ";
        cout<<endl; */
    }
    return 0;
}
