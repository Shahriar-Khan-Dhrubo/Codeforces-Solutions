#include <bits/stdc++.h>
#include <numeric>
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
vi gvec(vi &A)
{
    int i;
    vi G(A.size() - 1, 0);
    fo(i, G.size()) G[i] = gcd(A[i], A[i + 1]);
    return G;
}
void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start;
    int N, K;
    // string S;
    cin >> N;
    vi A(N, 0);
    fo(i, N) cin >> A[i];
    vi G(N - 1, 0);
    G = gvec(A);
    // fo(i, G.size()) cout << G[i] << " ";
    // cout << endl;
    if (is_sorted(all(G)))
    {
        cout << "YES" << endl;
    }
    else
    {
        Fo(i, 1, G.size())
        {
            if (G[i] < G[i - 1])
            {
                check = i;
                break;
            }
        }
        if (check == N - 2)
        {
            cout << "YES" << endl;
            return;
        }

        vi v1 = A;
        v1.erase(v1.begin() + (check-1));
        vi g1 = gvec(v1);

        vi v2 = A;
        v2.erase(v2.begin() + (check));
        vi g2 = gvec(v2);

        vi v3 = A;
        v3.erase(v3.begin() + (check + 1));
        vi g3 = gvec(v3);

        if (is_sorted(all(g1)) || is_sorted(all(g2)) || is_sorted(all(g3)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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