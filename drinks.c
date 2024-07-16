#include<stdio.h>
int main()
{
    int n,x,i;
    float sum=0;
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d",&x);
        sum+=x;
    }
    //float result=(double)sum/n;
    printf("%.10f",sum/n);
    return 0;
}
