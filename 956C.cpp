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
bool opr(std::vector<int> &a,std::vector<int> &b,std::vector<int> &c)
{

}
void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    int N, K, L1, L2, L3, R1, R2, R3;
    cin >> N;
    vi A(N, 0), B(N, 0), C(N, 0);
    fo(i, N) cin >> A[i];
    fo(i, N) cin >> B[i];
    fo(i, N) cin >> C[i];
    opr(A,B,C);
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
}//could not solve.will try later.found the concept but implementation is too hard