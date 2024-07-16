#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,min=INT_MAX,count_min=0,rem_count=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
            min=min<a[i]? min:a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==min)
                count_min++;
            if(count_min==2)
                break;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%min!=0)
            {
                rem_count++;
                break;
            }
        }
        if(count_min==1 || (count_min!=0 && rem_count!=0) )
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
