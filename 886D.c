#include<stdio.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    int a_val=*(int *)a;
    int b_val=*(int *)b;
    return a_val-b_val;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,k,i,count=0,ans=0;
        scanf(" %d%d",&n,&k);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
        }
        qsort(a,n,sizeof(int),compare);
        for(i=1; i<n; i++)
        {
            if(a[i]-a[i-1]<=k)
                count++;
            else
            {
                ans=ans>count ? ans : count;
                count=0;
            }

        }
        ans=ans>count ? ans : count;
        printf("%d\n",n-ans-1);
    }

    return 0;
}
