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
ll fact(ll n)
{
    ll i;
    ll result = 1;
    for (i = 1; i <= n; i++)
        result *= i;
    return result;
}
ll permutation(ll n, ll r)
{
    return fact(n) / fact(n - r);
}
ll combination(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void py()
{
    cout << "YES" << endl;
}
void pn()
{
    cout << "NO" << endl;
}
void pe()
{
    cout << endl;
}

void solve()
{
    int i, j, k, x, y, z, m, n, o, p, q, r, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    ll N, K, Q;
    ll Ans = 0;
    cin >> N >> K >> Q;
    // string S;
    vi A(N, 0), B;
    fo(i, N) cin >> A[i];
    fo(i, N)
    {
        if (A[i] <= Q)
        {
            cnt++;
        }
        else
        {
            if(cnt>=K) Ans+=(cnt-K+2)*(cnt-K+1)/2;
            cnt = 0;
        }
    }
    if(cnt>=K) Ans+=(cnt-K+2)*(cnt-K+1)/2;
    // B.pb(cnt);
    // fo(i, B.size())
    // {
    //     ll res;
    //     if (B[i] >= K)
    //     {
    //         Ans+= combination(B[i] - K + 2, B[i] - K);
    //     }
        
    // }
    cout << Ans <<endl;
    // fo(i,B.size()) cout<<B[i]<<" ";
    // pe();
    
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