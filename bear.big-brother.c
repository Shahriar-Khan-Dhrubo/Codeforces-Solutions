#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf(" %d %d",&a,&b);
    int count=1;
    x=3*a;
    y=2*b;
    while(x<=y)
    {
        x=3*x;
        y=2*y;
        count++;
    }
    printf("%d",count);
    return 0;
}
