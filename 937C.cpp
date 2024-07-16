#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string m=" AM";
        int h=stoi(s.substr(0,2));
        if(h>=12)
        {
            m=" PM";
            if(h>12)
                h-=12;
        }
        else if(h==0)
            h=12;
        cout<<(h<10 ? "0" : "")<<h<<s.substr(2,3)<<m<<endl;
    }
    return 0;
}
