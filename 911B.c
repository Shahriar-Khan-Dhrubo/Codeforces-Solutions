#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int a,b,c;
        scanf(" %d%d%d",&a,&b,&c);
        printf("%d %d %d\n",!((b+c)%2),!((a+c)%2),!((a+b)%2));
    }
    return 0;
}
