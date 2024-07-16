#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i, n) for (i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second
#define mp make_pair

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mpii;
typedef map<ll, int> mpli;
typedef map<ll, ll> mpll;

void solve()
{
    int i, j, k, x, y, z, a, c, cnt = 0, cnt1, cnt2, sum = 0, ans, check = 0, mn = INT_MAX;
    int N;
    cin >> N >> k;
    ans = k;
    vi A(N, 0);
    fo(i, N) cin >> A[i];
    fo(i, N)
    {
        if (A[i] % 2 == 0)
            cnt++;
        if (A[i] % k == 0)
        {
            ans = 0;
            check = 1;
            break;
        }
        else
        {
            ans = min(ans, k - A[i] % k);
        }
    }
    if (k == 4 && check == 0)
    {
        if (cnt >= 2)
            ans = 0;
        else if (cnt == 1)
            ans = 1;
        else
            ans = min(ans, 2);
    }
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