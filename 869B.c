#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        scanf(" %d",&n);
        if(n==1)
            printf("1\n");
        else if(n%2!=0)
            printf("-1\n");
        else if(n%2==0)
        {
            for(i=1;i<=n;i+=2)
                printf("%d %d ",i+1,i);
            printf("\n");
        }
    }
    return 0;
}
