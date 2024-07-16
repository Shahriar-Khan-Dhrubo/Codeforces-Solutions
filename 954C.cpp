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

void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    int N, M;
    cin >> N >> M;
    string S1, S2;
    cin >> S1;
    vi A(M, 0);
    fo(i, M) cin >> A[i];
    cin >> S2;
    // sortall(A);
    std::set<int> S(all(A));
    sortall(S2);
    x=0;
    // y=M-1;
    /*Fo(i,1,M)
    {
        if(A[i]!=A[i-1])
        {
            S1[A[i-1]-1]=S2[x++];
        }
        else
        {
            S1[A[i-1]-1]=S2[y--];
        }
    }
    S1[A[M-1]-1]=S2[x];*/
    a=S.size();
    for(auto i : S)
    {
        S1[i-1]=S2[x++];
    }
    cout<<S1<<endl;
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