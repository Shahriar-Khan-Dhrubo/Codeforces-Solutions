#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a="AA";
        string b="BB";
        if(n%2!=0)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i=1;i<=(n/2);i++)
            {
                if(i%2!=0)
                    cout<<a;
                else
                    cout<<b;
            }
            cout<<endl;
        }
    }
    return 0;
}
