#include<stdio.h>
long long mod=1000000007;
long long N=100001;
int main()
{
    int t,i;
    scanf(" %d",&t);
    long long fact[N];
    fact[0]=1;
    for(i=1;i<N;i++)
    {
        fact[i]=(fact[i-1]*i)%mod;
    }
    while(t--)
    {
        long long n;
        long long ans;
        scanf(" %lld",&n);
        ans=((n*(n-1)%mod)*fact[n])%mod;
        printf("%lld\n",ans);
    }
}
