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
    int i,j,k,x,y,z,a,c,cnt,cnt1,cnt2,sum=0,ans=0;
    int N;
    cin>>N;
    std::vector<int> A(100,0),fre(101,0);
    for(i=0;i<N;i++)
    {
        cin>>A[i];
        fre[A[i]]++;
    }
    for(i=1;i<101;i++) ans+=fre[i]/3;
    cout<<ans<<endl;
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