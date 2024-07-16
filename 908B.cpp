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
    int i, j, k, x, y, z, a, c, cnt = 0, cnt1, cnt2, sum = 0, ans = 0;
    int N;
    cin >> N;
    vi A(N, 0), fre(501, 0), Ans(N, 1), B;
    fo(i, N)
    {
        cin >> A[i];
        fre[A[i]]++;
    }
    for(i=0;i<501;i++)
    {
        if (fre[i] >= 2)
        {
            cnt++;
            B.pb(i);
        }
        if (cnt == 2)
            break;
    }
    if (cnt < 2)
        cout << "-1" << endl;
    else
    {
        fo(i,N)
        {
            if(A[i]==B[0])
            {
                Ans[i]=2;
                break;
            }
        }
        fo(i,N)
        {
            if(A[i]==B[1])
            {
                Ans[i]=3;
                break;
            }
        }
        for (auto elm : Ans)
            cout << elm << " ";
        cout << endl;
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