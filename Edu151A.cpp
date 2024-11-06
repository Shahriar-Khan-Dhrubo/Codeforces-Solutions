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

// global variables
int i, j, k;
// const int N=1e5+10;
// int A[N];

// mathematical functions
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
ll fact(int n)
{
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

// printing functions
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

// vector printing function
void vp(std::vector<int> &a)
{
    fo(i, a.size()) cout << a[i] << " ";
    pe();
}

// solve function
void solve()
{
    int x, y, z, m, n, o, p, q, r, a, b, c, l, cnt = 0, cnt1 = 0, cnt2 = 0, sum = 0, ans = 0, check = 0, mn = INT_MAX, mx = 0, start, csum1 = 0, csum2 = 0;
    cin >> n >> k >> x;
    // string S;
    // vi A(n, 0);
    if(k==1 && x==1){
        cout<<"NO"<<endl;
        return;
    }
    if(x!=1){
        cout<<"YES"<<endl<<n<<endl;
        fo(i,n) cout<<1<<" ";
        pe();
        return;
    }
    if(x==1){
        if(n%2==0){
            cout<<"YES"<<endl<<n/2<<endl;
            for(i=1;i<=(n/2);i++) cout<<2<<" ";
            pe();
        }
        else{
            if(k==2) cout<<"NO"<<endl;
            else{
                a=n-3;
                b=a/2;
                cout<<"YES"<<endl<<b+1<<endl;
                fo(i,b) cout<<2<<" ";
                cout<<3<<endl;
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
