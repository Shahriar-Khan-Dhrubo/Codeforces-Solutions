#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int x,n,i;
        scanf(" %d%d",&x,&n);
        int ans=0;
        for(i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(n<=x/i)
                {
                    ans=max(ans,i);
                }
                if(n<=i)
                {
                    ans=max(ans,x/i);
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
