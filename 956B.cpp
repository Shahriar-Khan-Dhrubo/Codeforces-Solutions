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
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    int N, M;
    cin >> N >> M;
    std::vector<std::string> A(N), B(N);
    fo(i, N) cin >> A[i];
    fo(i, N) cin >> B[i];
    std::vector<vector<int>> C(N, vector<int>(M)), D(N, vector<int>(M));
    fo(i, N)
    {
        fo(j, M) C[i][j] = A[i][j] - '0';
    }
    // fo(i, N)
    // {
    //     fo(j, M) cout << C[i][j] << " ";
    //     pe();
    // }
    fo(i, N)
    {
        fo(j, M) D[i][j] = B[i][j] - '0';
    }
    // fo(i, N)
    // {
    //     fo(j, M) cout << D[i][j] << " ";
    //     pe();
    // }
    fo(i, N - 1)
    {
        fo(j, M-1)
        {
            if (C[i][j] != D[i][j])
            {
                while (C[i][j] != D[i][j])
                {
                    C[i][j] = (C[i][j] + 1) % 3;
                    C[i][j + 1] = (C[i][j + 1] + 2) % 3;
                    C[i + 1][j] = (C[i + 1][j] + 2) % 3;
                    C[i+1][j + 1] = (C[i+1][j + 1] + 1) % 3;
                }
            }
        }
    }
    if (C == D)
        py();
    else
        pn();
    // fo(i, N)
    // {
    //     fo(j, M) cout << C[i][j] << " ";
    //     pe();
    // }
    // fo(i, N)
    // {
    //     fo(j, M) cout << D[i][j] << " ";
    //     pe();
    // }
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