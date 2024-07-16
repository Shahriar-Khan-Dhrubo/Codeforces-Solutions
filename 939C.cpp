#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=1;i<=n;i++)
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int,int> mpii;
typedef map<ll,int> mpli;
typedef map<ll,ll> mpll;

void solve()
{
    int i,j,k,x,y,z,a,c,cnt,cnt1,cnt2,sum=0;
    int N;
    cin>>N;
    ll ans=0;
    fo(i,N) ans+=i*(2*i-1);
    cout<<ans<<" "<<N*2<<endl;
    for(i=N;i>=1;i--)
    {
        cout<<"1 "<<i<<" ";
        fo(j,N) cout<<j<<" ";
        cout<<endl;

        cout<<"2 "<<i<<" ";
        fo(j,N) cout<<j<<" ";
        cout<<endl;
    }
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

