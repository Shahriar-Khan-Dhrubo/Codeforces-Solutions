#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n;
        scanf(" %d",&n);
        if(n==3)
            printf("NO\n");
        else
        {
            printf("YES\n");
            if(n%2==0)
            {
                for(int i=1;i<=n/2;i++)
                    printf("-1 1 ");
            }
            else
            {
                for(int i=1;i<=n/2;i++)
                    printf("%d %d ",-(n/2-1),n/2);
                printf("%d",-(n/2-1));
            }
            printf("\n");
        }
    }
    return 0;
}
