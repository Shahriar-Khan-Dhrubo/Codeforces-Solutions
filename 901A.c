#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        long long a,b,count=0;
        scanf(" %lld%lld%d",&a,&b,&n);
        long long c[n];
        for(i=0; i<n; i++)
        {
            scanf(" %lld",&c[i]);
        }
        count=b-1;
        for(i=0;i<n;i++)
        {
           count+= (c[i] > a-1 ? a-1 : c[i]);
        }
        printf("%lld\n",count+1);
    }
    return 0;
}
