#include<stdio.h>
int main()
{
    int n,i,count_max=0,max=0,min=101,count;
    scanf(" %d",&n);
    int count_min=n-1;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    //printf("%d\n",max);
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            break;
        }
        count_max++;
    }
    //printf("%d\n",count_max);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    //printf("%d\n",min);
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==min)
        {
            break;
        }
        count_min--;
    }
    //printf("%d\n",count_min);
    if(count_max<count_min)
    {
        count=count_max+(n-count_min-1);
    }
    else
    {
        count=count_max+(n-count_min-2);
    }
    printf("%d",count);
    return 0;
}
