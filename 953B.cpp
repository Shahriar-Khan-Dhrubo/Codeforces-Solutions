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
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    ll N, A, B;
    ll Ans = 0;
    cin >> N >> A >> B;
    if (A >= B)
    {
        Ans = N * A;
        cout << Ans << endl;
    }
    else
    {
        if (B - A > N)
        {
            Ans = N * (B + (B - N + 1)) / 2;
            cout << Ans << endl;
        }
        else if (B - A < N)
        {
            Ans = (B - A) * (B + A + 1) / 2 + (N - B + A) * A;
            cout << Ans << endl;
        }
        else
        {
            Ans = N * (B + A + 1) / 2;
            cout << Ans<<endl;
        }
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