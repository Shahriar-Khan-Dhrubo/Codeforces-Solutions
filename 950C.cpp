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
std::set<int> S;
mpii MP;
void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start;
    int N, M;
    // // string S;
    S.clear(),MP.clear();
    cin >> N;
    vi A(N,0),B(N,0);
    fo(i,N) cin>>A[i];
    fo(i,N)
    {
        cin>>B[i];
        S.insert(B[i]);
    }
    cin>>M;
    vi D(M,0);
    fo(i,M)
    {
        cin>>D[i];
        MP[D[i]]++;
    }
    bool ok=1;
    fo(i,N)
    {
        if(A[i]!=B[i])
        {
            MP[B[i]]--;
            if(MP[B[i]]<0) ok=0;
        }
    }
    if(S.find(D[M-1])==S.end()) cout<<"NO"<<endl;
    else if(ok==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    /* std::vector<pair<int, int>> A(N), B(N); //approach was right but cant find the corner cases
    fo(i, N)
    {
        cin >> A[i].f;
        A[i].s = i;
    }
    fo(i, N)
    {
        cin >> B[i].f;
        B[i].s = i;
    }
    cin >> M;
    vi D(M, 0);
    fo(i, M) cin >> D[i];
    auto it = std::find_if(all(B), [&](const std::pair<int, int> &p){ return p.first == D[M-1]; });
    if (it==B.end()) cout<<"NO"<<endl;
    else
    {
        fo(i, M)
        {
            it=std::find_if(all(B), [&](const std::pair<int, int> &p){ return p.first == D[i]; });
            if(it!=B.end() && A[it->s].f!=B[it->s].f)
            {
                A[it->s].f= D[i];
            }
        }
        if(A==B) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }*/
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