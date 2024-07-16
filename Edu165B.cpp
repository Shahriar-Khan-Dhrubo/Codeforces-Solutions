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
    int i, j, k, x, y, z, a, c, cnt0 = 0, cnt1 = 0, cnt2, sum = 0;
    ll ans = 0;
    string S;
    cin >> S;
    if (is_sorted(S.begin(), S.end()))
        cout << ans << endl;
    else
    {
        for (i = 0; i < S.size(); i++)
        {
            if (S[i] == '1')
                cnt1++;
            else if (cnt1 == 0)
                continue;
            else
            {
                ans += (cnt1 + 1);
            }
        }
        cout << ans << endl;
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