#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

void solve()
{
    int i,j,k,x,y,z,a,c,cnt,cnt1,cnt2,sum=0,ans=0;
    int N;
    cin>>N;
    std::map<int,int> A;
    fo(i,N)
    {
        cin>>a;
        A[a]++;
    }
    cnt=count_if(A.begin(),A.end(),[](const pair<int,int> &p) {return p.second==2;});
    cout<<cnt<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
