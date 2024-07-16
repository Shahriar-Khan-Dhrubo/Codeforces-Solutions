#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define foa(i,a,n) for(i=a;i<n;i++)
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
    int i,j,k,x,y,z,cnt,cnt1,cnt2,sum=0,ans=0;
    int N,c,d;
    cin>>N>>c>>d;
    vll a(N*N);
    fo(i,N*N) cin>>a[i];
    sortall(a);
    vll b(N*N);
    b[0]=a[0];
    foa(i,1,N) b[i]=b[i-1]+c;
    foa(i,1,N) foa(j,0,N) b[i*N+j]=b[(i-1)*N+j]+d;
    sortall(b);
    cout<< (a==b ? "YES" : "NO" )<<endl;
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

