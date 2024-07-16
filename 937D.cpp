#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i;
    cin>>t;
    std::set<int> v;
    v.insert(1);
    v.insert(10);
    v.insert(11);
    auto elm=v.begin();
    elm++;
    for(i=2;i<=100000;i++)
    {
        int x=*elm*10;
        int y=x+1;
        if(x<=100000)
            v.insert(x);
        else
            break;
        if(y<=100000)
            v.insert(y);
        else
            break;
        elm++;
    }
    for(auto it: v)
    {
        for(auto it1 : v)
        {
            if(it*it1 <= 100000)
                v.insert(it*it1);
        }
    }
    while(t--)
    {
        int n;
        cin>>n;
        if(v.find(n)!=v.end())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
