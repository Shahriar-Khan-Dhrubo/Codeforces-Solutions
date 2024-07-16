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
    int i,j,k,x,y,z,a,c,cnt,cnt1,cnt2,sum=0,ans=0;
    string S;
    cin>>S;
    if(count(S.begin(),S.end(),S[0])==S.size())
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(i=1;i<S.size();i++)
        {
            if(S[i]!=S[0])
            {
                char temp;
                temp=S[0];
                S[0]=S[i];
                S[i]=temp;
                break;
            }
        }
        cout<<S<<endl;
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
