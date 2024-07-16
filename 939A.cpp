#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve()
{
    int i,j,x,y,z,c,cnt,cnt1,cnt2,sum=0,ans=0;
    int k,q;
    cin>>k>>q;
    vi a(k),n(q);
    fo(i,k) cin>>a[i];
    fo(i,q) cin>>n[i];
    fo(i,q)
    {
        a[0]>n[i] ? cout<<n[i] : cout<<a[0]-1;
        cout<<" ";
    }
    cout<<endl;
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

