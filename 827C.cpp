#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ans='0';
        std::vector<string> a(8);
        for(int i=0;i<a.size();i++)
        {
            cin>>a[i];
            if(count(a[i].begin(),a[i].end(),'R')==8)
                ans='R';
        }
        ans=='R' ? cout<<ans : cout<<'B';
        cout<<endl;
    }
    return 0;
}
