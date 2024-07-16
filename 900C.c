#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        long long n,k,x;
        scanf(" %lld%lld%lld",&n,&k,&x);
        printf("%s\n",(2*x >= k*(k+1) && 2*x <= (n*(n+1)-(n-k)*(n-k+1))) ? "YES" : "NO");
    }
    return 0;
}
