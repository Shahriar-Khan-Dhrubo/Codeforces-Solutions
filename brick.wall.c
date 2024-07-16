#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        long long n,m,max;
        scanf(" %lld %lld",&n,&m);
        max=n*(m/2);
        printf("%lld\n",max);
    }
    return 0;
}
