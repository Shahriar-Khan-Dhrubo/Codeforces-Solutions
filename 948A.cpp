#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,start,n) for(i=start;i<n;i++)
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
    int i,j,k,x,y,z,a,b,c,cnt=0,cnt1=0,cnt2=0,sum=0,ans=0,check=0,mn=INT_MAX,mx=0,start;
    int N,M;
    string S;
    cin>>N>>M;
    if(N==M)
    {
        cout<<"YES"<<endl;
    }
    else if(M>N)
    {
        cout<<"NO"<<endl;
    }
    else if(N%2==0 && M%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(N%2!=0 && M%2!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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