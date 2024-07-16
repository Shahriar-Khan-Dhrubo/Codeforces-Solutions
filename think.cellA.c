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
        int size=2*n;
        int a[size];
        for(i=0;i<size;i++)
        {
            scanf(" %d",&a[i]);
        }
        qsort(a,size,sizeof(int),compare);
        for(i=size-1;i>0;i-=2)
        {
            sum+=a[i-1];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
