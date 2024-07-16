#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define f first
#define s second
#define mp make_pair

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int,int> mpii;
typedef map<ll,int> mpli;
typedef map<ll,ll> mpll;

void solve()
{
    int i,j,k,x,y,z,a,c,cnt=0,cnt1,cnt2,sum=0,ans=1;
    string S;
    cin>>S;
    if(is_sorted(S.begin(),S.end()))
        cout<<ans<<endl;
    else
    {
        for(i=0;i<S.size()-1;i++)
        {
            if(S[i]!=S[i+1])
                ans++;
            if(S[i]=='0' && S[i+1]=='1')
                cnt=1;
        }
        cout<<ans-cnt<<endl;
    }
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
