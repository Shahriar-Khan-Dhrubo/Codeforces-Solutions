#include<stdio.h>

#define ll long long
int main()
{
    int t,i;
    scanf(" %d",&t);
    for(i=1; i<=t; i++)
    {
        int n,j;
        scanf(" %d",&n);
        int a[n];
        ll b[n],lower=0,upper=1e9,count=0;
        ll exclude[n];
        for(j=0;j<n;j++)
        {
            exclude[j]=0;
        }
        for(j=0; j<n; j++)
        {
            scanf(" %d %lld",&a[j],&b[j]);
        }
        for(j=0; j<n; j++)
        {
            if(a[j]==1 && b[j]>lower)
                lower=b[j];
            else if(a[j]==2 && b[j]<upper)
                upper=b[j];
            else if(a[j]==3)
                exclude[j]=b[j];
        }
        /*printf("lower=%d upper=%d\n",upper,lower);
        for(j=0;j<n;j++)
        {
            printf("%lld\t",exclude[j]);
        }
        printf("\n");*/
        if(lower<=upper)
        {
            count=upper-lower+1;
            //printf("count=%lld\n",count);
            for(j=0; j<n; j++)
            {
                if(exclude[j]>=lower && exclude[j]<=upper)
                    count--;
            }
            printf("%lld\n",count);
        }
        else
            printf("0\n");
    }
    return 0;
}
