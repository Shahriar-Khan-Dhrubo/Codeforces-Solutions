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
ll fact(int n)
{
    int i;
    ll result = 1;
    for (i = 1; i <= n; i++)
        result *= i;
    return result;
}
ll permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}
ll combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
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
    int i, j, k, x, y, z, m, n, o, p, q, r, a, b, c, cnt = 0, cnt1 = 1, cnt2 = 1, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    int N;
    cin >> N;
    // string S;
    vi A(N, 0), B(N, 0);
    fo(i, N) cin >> A[i];
    fo(i, N) cin >> B[i];
    vi C(2*N+1,0),D(2*N+1,0);
    fo(i,N)
    {
        j=i;
        while(A[j]==A[i] && j<N) j++;
        C[A[i]]=max(C[A[i]],j-i);
        i=j-1;
    }
    fo(i,N)
    {
        j=i;
        while(B[j]==B[i] && j<N) j++;
        D[B[i]]=max(D[B[i]],j-i);
        i=j-1;
    }
    for(i=1;i<=2*N;i++)
    {
        ans=max(C[i]+D[i],ans);
    }
    cout<<ans<<endl;
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
