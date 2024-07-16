#include<stdio.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b ? -1:1);
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        long long sum1=0,sum2=0,min1=1000000000,min2=1000000000;
        scanf(" %d",&n);
        long long a[n],b[n];
        for(i=0; i<n; i++)
        {
            scanf(" %lld",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf(" %lld",&b[i]);
        }
        if(n==1)
            printf("%lld\n",a[0]+b[0]);
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]<min1)
                    min1=a[i];
                if(b[i]<min2)
                    min2=b[i];
            }
            for(i=0;i<n;i++)
            {
                sum1+= (min2+a[i]);
                sum2+= (min1+b[i]);
            }
            printf("%lld\n",(sum1<sum2 ? sum1 : sum2));
        }
    }
    return 0;
}
