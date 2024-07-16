#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int GCD(int a,int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,gcd=0;
        cin>>n;
        std::vector<int> a(n);
        for(auto i=0; i<n; i++)
        {
            cin>>a[i];
            gcd=GCD(gcd,a[i]);
        }
        int ans=a.back()/gcd;
        cout<<ans<<endl;
    }
    return 0;
}
