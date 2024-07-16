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
    cin >> N;
    ll lastOr = 0;
    vll A(N, 0);
    fo(i, N)
    {
        cin >> A[i];
    }
    if (N == 1 && count(all(A), A[0]) == N)
        cout << "1" << endl;
    else
    {
        fo(i, N)
        {
            lastOr = A[i] | lastOr;
        }
        fo(i, N)
        {
            ll curOr = 0;
            fo(j,i)
            {
                curOr = A[j] | curOr;
                if (curOr == lastOr)
                {
                    check = 1;
                    break;
                }
                else
                    check = 0;
            }
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