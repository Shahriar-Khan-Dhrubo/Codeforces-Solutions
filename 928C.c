#include<stdio.h>
long long sod(int n)
{
    long long sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t,i;
    scanf(" %d",&t);
    long long v[200001];
    v[0]=0;
    for(i=1; i<200001; i++)
    {
        v[i]=v[i-1]+sod(i);
    }
    while(t--)
    {
        int n;
        scanf(" %d",&n);
        printf("%lld\n",v[n]);
    }
    return 0;
}
