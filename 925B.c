#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,sum=0,min,x=0,i;
        scanf(" %d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            sum=sum+a[i];
        }
        min=sum/n;
        for(i=0;i<n;i++)
        {
            x+=a[i]-min;
            if(x<0)
            {
                printf("NO\n");
                break;
            }
        }
        if(x>=0)
            printf("YES\n");
    }
    return 0;
}
