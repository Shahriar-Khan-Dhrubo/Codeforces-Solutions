#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b) ? -1:1;
}
int f(int *a,int *b)
{
    return *a-*b;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,q,i;
        scanf(" %d%d",&n,&q);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
        }
        long long csum[n+1],csum1[n+1];
        csum[0]=0,csum1[0]=0;
        for(i=1; i<=n; i++)
        {
            csum[i]=csum[i-1]+a[i-1];
            csum1[i]=csum1[i-1]+(a[i-1]==1);
        }
        while(q--)
        {
            int l,r;
            scanf(" %d%d",&l,&r);
            if(l==r)
                printf("NO\n");
            else
            {
                int digit=r-l+1;
                long long cur_sum=csum[r]-csum[l-1];
                long long cur_sum1=csum1[r]-csum1[l-1];
                if(cur_sum-2*cur_sum1>=digit-cur_sum1)
                    printf("YES\n");
                else
                    printf("NO\n");
            }

        }
    }
    return 0;
}
