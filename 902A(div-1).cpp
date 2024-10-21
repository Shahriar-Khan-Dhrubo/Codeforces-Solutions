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

void solve()
{
    int i, j, k, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, check = 0, mn = INT_MAX, mx = 0, start;
    ll N, P,x;
    cin >> N >> P;
    std::vector<pair<ll, ll>> A(N);
    fo(i, N) cin >> A[i].f;
    fo(i, N) cin >> A[i].s;
    sort(all(A), [](const std::pair<ll, ll> &a, const std::pair<ll, ll> &b)
         { return a.s < b.s; });
    ll ans = P;
    x = N - 1;
    if (A[0].s > P)
    {
        cout << N * P << endl;
        return;
    }
    fo(i, N)
    {
        if (A[i].s < P)
        {
            if (A[i].f > x)
            {
                ans += A[i].s * x;
                x = 0;
                break;
            }
            else
            {
                ans += A[i].f * A[i].s;
                x -= A[i].f;
            }
        }
        else break;
    }
    ans+= x * P;
    cout << ans << endl;
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