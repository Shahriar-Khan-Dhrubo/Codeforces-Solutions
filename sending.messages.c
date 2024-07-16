#include<stdio.h>
int main()
{
    int t,i;
    scanf(" %d",&t);
    for(i=1; i<=t; i++)
    {
        int n;
        long long int f,a,b;
        scanf(" %d %lld %lld %lld",&n,&f,&a,&b);
        long long int array[n+1];
        array[0]=0;
        for(int j=1; j<n+1; j++)
        {
            scanf(" %lld",&array[j]);
        }
        if((f-a*array[n])>0)
            printf("YES\n");
        else
        {
            for(int j=0; j<n; j++)
            {
                if(array[j+1]-array[j]>=b || b<a || (array[j+1]-array[j])*a>b)
                    f=f-b;
                else
                    f=f-(array[j+1]-array[j])*a;
            }
            if(f>0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
