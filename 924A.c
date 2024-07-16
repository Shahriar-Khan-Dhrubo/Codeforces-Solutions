#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int a,b;
        scanf(" %d%d",&a,&b);
        if(a%2!=0 && b%2!=0)
            printf("NO\n");
        else
        {
            if(a%2==0 && b%2!=0 && a/2!=b)
            {
                printf("YES\n");
            }
            else if(a%2!=0 && b%2==0 && b/2!=a)
            {
                printf("YES\n");
            }
            else if(a%2==0 && b%2==0)
            {
                printf("YES\n");
            }
            else
                printf("NO\n");
        }
    }
    return 0;
}
