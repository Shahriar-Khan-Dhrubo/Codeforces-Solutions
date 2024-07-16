#include<stdio.h>
int main()
{
    int k,n,w,i,b_money;
    scanf(" %d %d %d",&k,&n,&w);
    int cost=0;
    for(i=1;i<=w;i++)
    {
      cost=cost+i*k;
    }
    if(cost>n)
        printf("%d",cost-n);
    else
        printf("0");
    return 0;
}
