#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second
#define mp make_pair

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int,int> mpii;
typedef map<ll,int> mpli;
typedef map<ll,ll> mpll;

void solve()
{
    int i,j,k,x,y,z,a,b,c,d,cnt,cnt1,cnt2,sum=0,ans=0,m,n,o,p;
    cin>>a>>b>>c>>d;
    m=min(a,b);
    n=max(a,b);
    o=min(c,d);
    p=max(c,d);
    if( (o>m && o<n && p>m && p>n) || (o<m && o<n && p>m && p<n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
