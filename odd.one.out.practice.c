#include<stdio.h>
int check(int a,int b,int c)
{
    if(a==b)
        return c;
    else if(b==c)
        return a;
    else
        return b;
}
int main()
{
    int n,i;
    scanf(" %d",&n);
    for(i=1; i<=n; i++)
    {
        int a,b,c;
        scanf(" %d %d %d", &a, &b, &c);
        int value=check(a,b,c);
        printf("%d\n",value);
    }
    return 0;
}
