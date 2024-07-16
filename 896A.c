#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        scanf(" %d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        if(n%2==0)
        {
            printf("2\n");
            printf("1 %d\n",n);
            printf("1 %d\n",n);
        }
        else
        {
            printf("4\n");
            printf("1 %d\n",n-1);
            printf("1 %d\n",n-1);
            printf("%d %d\n",n-1,n);
            printf("%d %d\n",n-1,n);
        }
    }
    return 0;
}
