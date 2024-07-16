#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b) ? -1:1;
}
int f(int *a,int *b)
{
    return *a-*b;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int k,x,a,i;
        long long sum=0,value=1;
        scanf(" %d%d%d",&k,&x,&a);
        for(i=1;i<=x+1;i++)
        {
            sum+=value;
            if(sum>a)
            {
                printf("NO\n");
                break;
            }
            value=sum /(k-1)+1;
        }
        if(a>=sum)
            printf("YES\n");
    }
    return 0;
}
