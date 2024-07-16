#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int l,r,i,ans=0,p,lucky_max=0;
        scanf(" %d%d",&l,&r);
        for(i=l; i<=r; i++)
        {
            int max=0,min=INT_MAX;
            int value=i;
            while(value>0)
            {
                int digit=value%10;
                value/=10;
                max=digit>max ? digit : max;
                min=digit <min ? digit : min;
            }
            int luckiness=max-min;
            if(luckiness>=lucky_max)
            {
                lucky_max=luckiness;
                ans=i;
                p=0;
            }
            if(luckiness==9)
            {
                printf("%d\n",i);
                p=1;
                break;
            }
        }
        if(p==0)
            printf("%d\n",ans);
    }
    return 0;
}
