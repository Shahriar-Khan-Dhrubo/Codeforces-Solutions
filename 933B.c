#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b) ? -1:1;
}
int f(int *a,int *b)
{
    return *a-*b;
}
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
        for(i=1;i<n-1;i++)
        {
            a[i]-=2*a[i-1];
            a[i+1]-=1*a[i-1];
            a[i-1]-=a[i-1];
            if(a[i]<0)
                break;
        }
        for(i=1;i<n;i++)
        {
            if(a[i]!=0)
            {
                printf("NO\n");
                break;
            }
        }
        if(i==n)
            printf("YES\n");
    }
    return 0;
}
