#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,q,i;
        scanf(" %d%d",&n,&q);
        int a[n+1];
        long long sum[n+1];
        a[0]=0;
        sum[0]=0;
        for(i=1;i<n+1;i++)
        {
           scanf(" %d",&a[i]);
           sum[i]=a[i]+sum[i-1];
        }
        for(i=1;i<=q;i++)
        {
            int l,r,k;
            scanf(" %d%d%d",&l,&r,&k);
            long long digit=r-l+1;
            long long result=sum[n]-sum[r]+sum[l-1]+digit*k;
            printf("%s\n",result%2!=0 ? "YES" : "NO");
        }
    }
    return 0;
}
