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
        long long sum=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        qsort(a,n,sizeof(int),compare);
        for(i=0;i<n-1;i++)
        {
            sum=sum+a[i+1]-a[i];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
