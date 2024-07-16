#include<bits/stdc++.h>//tried my best but time fails on test 3
using namespace std;
int mex(vector<int> &p)
{
    int m=0;
    unordered_set<int> s(p.begin(),p.end());
    while(s.find(m)!=s.end())
        m++;
    return m;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,mex=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(x>0)
                cout<<mex<<" " , mex+=x;
            else
                cout<<mex-x<< " ";
        }
        cout<<endl;
    }
    return 0;
}

