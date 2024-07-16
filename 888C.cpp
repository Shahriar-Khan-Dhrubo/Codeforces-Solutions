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

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mpii;
typedef map<ll, int> mpli;
typedef map<ll, ll> mpll;

void solve()
{
    int i, j, k, x, y, z, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start;
    int N;
    string S;
    cin >> N >> k;
    vi A(N, 0);
    fo(i, N) cin >> A[i];
    x = A[0];
    y = A[N - 1];
    if (x == y)
    {
        fo(i, N)
        {
            if (A[i] == x)
                cnt++;
        }
        if (cnt >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        fo(i, N)
        {
            if (A[i] == x)
                cnt1++;
            if (cnt1 == k)
            {
                check = 1;
                a = i;
                break;
            }
        }
        Fo(i, a+1, N)
        {
            if (A[i] == y)
                cnt2++;
        }
        if (check == 1 && cnt2 >= k)
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
