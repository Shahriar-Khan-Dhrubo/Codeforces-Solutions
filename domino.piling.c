#include<stdio.h>
int main()
{
    int M,N,area,square=2,maxnum;
    scanf(" %d %d",&M,&N);
    area=M*N;
    maxnum=floor(area/2);
    printf("%d",maxnum);

    return 0;
}
