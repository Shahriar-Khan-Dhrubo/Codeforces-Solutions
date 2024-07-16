#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i,j,k,x,y,z,m,n,o,p;
    cin>>t;
    while(t--)
    {
        int N,c,d,flag=0;
        long long mn=1e9;
        cin>>N>>c>>d;
        std::map<long long,int> mp1,mp2;
        for(i=0; i<N*N; i++)
        {
            long long c;
            cin>>c;
            mn=min(mn,c);
            mp1[c]++;
        }
        long long b[N][N];
        b[0][0]=mn;
        mp2[b[0][0]]++;
        for(i=0; i<N; i++)
        {
            if(i!=0)
                {
                    b[i][0]=b[i-1][0]+c;
                    mp2[b[i][0]]++;
                }
            for(j=1; j<N; j++)
            {
                b[i][j]=b[i][j-1]+d;
                mp2[b[i][j]]++;
            }
        }
        if(mp1==mp2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
