#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,count=0,x,y;
        cin>>n;
        //std::vector<int> a(n);
        cin>>x;
        for(i=1;i<n;i++)
        {
            cin>>y;
            if(y>=2*x)
            {
                count+=(y-1)/(2*x-1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
