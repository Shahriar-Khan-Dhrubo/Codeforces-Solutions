#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,k,my_pos,wins=0;
        cin>>n>>k;
        my_pos=k-1;
        std::vector<long long> a(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long mx=max_element(a);
        int mx_index=a.find(mx);
        if(mx_index>my_pos)
        {
            for(i=0;i<mx_index;i++)
            {
                if(i=k-1)
                    continue;
                if(a[i]<a[my_pos])
                    wins++;
                else
                    break;
            }
        }
        else if(mx_index<my_pos)
        {

        }
    }
    return 0;
}

