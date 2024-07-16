#include<stdio.h>
#include<stdlib.h>
int pair(const void *pa,const void *pb)
{
    int *a=(int *)pa;
    int *b=(int *)pb;
    if(a[1]==b[1])
        return a[0]-b[0];
    else
        return a[1]-b[1];
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        scanf(" %d",&n);
        int a[n][2];
        for(i=0;i<n;i++)
            scanf(" %d",&a[i][0]);
        for(i=0;i<n;i++)
            scanf(" %d",&a[i][1]);
        qsort(a,n,sizeof(int)*2,pair);
        long long sum=a[0][0];
        for(i=1;i<n;i++)
        {
            sum+=a[i][0]+a[i-1][1];
        }
        printf("%lld\n",sum);
        //for(i=0;i<n;i++)
            //printf("%d %d\n",a[i][0],a[i][1]);
    }
    return 0;
}
