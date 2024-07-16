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
    cout<<"YES"<<endl;
}
void pn()
{
    cout<<"NO"<<endl;
}
void pe()
{
    cout<<endl;
}

void solve()
{
    int i, j, k, x, y, z, m, n, o, a, b, c, cnt = 0, cnt1 = 0, cnt2 = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    int N, K;
    cin >> N;
    string S;
    cin>>S;
    vi A;
    fo(i,S.size()) A.pb(S[i]-'0');
    fo(i,A.size()-1)
    {
        x=std::stoi(S.substr(i,2));
        fo(j,S.size())
        {
            if(j==i)
            {
                j++;
                continue;
            }
            x=min(A[j]*x,A[j]+x);
        }
        mn=min(mn,x);
    }
    cout<<mn<<endl;
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