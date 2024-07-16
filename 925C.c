#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,c1=0,c2=0,ans;
        scanf(" %d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        if(a[0]==a[n-1])
        {
            for(i=1;i<n-1;i++)
            {
                if(a[i]==a[0])
                    c1++;
                else
                    break;
            }
            for(i=n-2;i>=1;i--)
            {
                if(a[i]==a[0])
                    c2++;
                else
                    break;
            }
            n-c1-c2-2 <0 ? printf("0\n") : printf("%d\n",n-c1-c2-2);
        }
        else
        {
            for(i=1;i<n-1;i++)
            {
                if(a[i]==a[0])
                    c1++;
                else
                    break;
            }
            for(i=n-2;i>=1;i--)
            {
                if(a[i]==a[n-1])
                    c2++;
                else
                    break;
            }
            c1>c2 ? printf("%d\n",n-c1-1) : printf("%d\n",n-c2-1);
        }
    }
    return 0;
}
