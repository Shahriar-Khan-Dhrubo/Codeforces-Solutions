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

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b) *b);
}
ll LCM(const vll &a)
{
    ll i,result=a[0];
    Fo(i,1,a.size()) result=lcm(result,a[i]);
    return result;
}
void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start;
    int N;
    cin>>N;
    // string S;
    vll A(N,0);
    fo(i,N) cin>>A[i];
    ll lcm=LCM(A);
    ll sum=0;
    fo(i,N)
    {
        sum+=lcm/A[i];
    }
    if(sum>=lcm) cout<<"-1"<<endl;
    else
    {
        fo(i,N)
        {
            cout<<lcm/A[i]<<" ";
        }
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