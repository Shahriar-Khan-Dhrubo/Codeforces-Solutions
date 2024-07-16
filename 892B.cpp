#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,start,n) for(i=start;i<n;i++)
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
    int i,j,k,x,y,z,a,b,c,cnt=0,cnt1=0,cnt2=0,sum=0,check=0,mx=0,start;
    int N;
    ll ans=0,mn1=INT_MAX,mn2=INT_MAX;;
    string S;
    cin>>N;
    fo(i,N)
    {
        int m;
        cin>>m;
        vll A(m,0);
        fo(j,m)
        {
           cin>>A[j]; 
        }
        sortall(A);
        mn1=min(mn1,A[0]);
        mn2=min(mn2,A[1]);
        ans+=A[1];
    }
    cout<<ans+mn1-mn2<<endl;
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