#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,m,a;
    double flagForLength,flagForWidth,flagstones;
    scanf(" %lld %lld %lld",&n,&m,&a);
    flagForLength=ceil((double)n/a);
    flagForWidth=ceil((double)m/a);
    flagstones=flagForLength * flagForWidth;
    printf("%lld",(long long int)flagstones);

    return 0;
}
