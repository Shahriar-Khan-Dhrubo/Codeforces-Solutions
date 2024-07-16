#include<stdio.h>
#define ll long long
int main()
{
    ll n,sum=0;
    scanf(" %lld",&n);
    if(n%2==0)
    {
        sum=n/2;
    }
    else
    {
        sum=((n-1)/2)-n;
    }
    printf("%lld",sum);
    return 0;
}
