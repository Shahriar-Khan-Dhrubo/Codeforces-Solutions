#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,mx,m=0,last,first;
        cin>>n;
        std::vector<int> a(n);
        for(i=0; i<n; i++)
            cin>>a[i];
        std::vector<int> b(100);
        if(is_sorted(a.begin(),a.end()))
            cout<<"YES"<<endl;
        else
        {
            for(i=0; i<n-1; i++)
            {
                if(a[i]>a[i+1])
                    mx=i;
            }
            for(i=0; i<n; i++)
            {
                if(i<=mx)
                {
                    if(a[i]>10)
                    {
                        last=a[i]%10;
                        first=a[i]/10;
                        b[m++]=first;
                        b[m++]=last;
                    }
                    else
                        b[m++]=a[i];

                }
                else
                    b[m++]=a[i];
            }
            if(is_sorted(b.begin(),b.begin()+m))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
