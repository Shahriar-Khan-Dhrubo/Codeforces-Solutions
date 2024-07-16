#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, start, n) for (i = start; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second
#define mp make_pair
#define mod 1000000007

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mpii;
typedef map<ll, int> mpli;
typedef map<ll, ll> mpll;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void py()
{
    cout<<"YES"<<endl;
}
void pn()
{
    cout<<"NO"<<endl;
}

int v1[]={-1,0,1,0};
int v2[]={0,-1,0,1};
void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    int N,M;
    cin >> N >> M;
    // string S;
    std::vector<vector<ll>> A(N,vector<ll>(M,0));
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++) cin>>A[i][j];
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            ll Mx=0;
            for(k=0;k<4;k++)
            /*{
                a=i+v1[k];
                b=j+v2[k];
                if( a>=0 && b>=0 && a<N && b<M ) Mx=max(Mx,A[a][b]);
            }*/
            if(i>0) Mx=max(Mx,A[i-1][j]);
            if(j>0) Mx=max(A[i][j-1],Mx);
            if(i<N-1) Mx=max(A[i+1][j],Mx);
            if(j<M-1) Mx=max(A[i][j+1],Mx);
            A[i][j]=min(Mx,A[i][j]);
        }
    }
    fo(i,N)
    {
        fo(j,M) cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}