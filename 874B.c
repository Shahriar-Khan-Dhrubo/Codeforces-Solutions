#include<stdio.h>
#include<stdlib.h>
int pair(const void *pa,const void *pb)
{
    int *a=(int *)pa;
    int *b=(int *)pb;
    if(a[0]==b[0]) return a[1]-b[1];
    else return a[0]-b[0];
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
        int n,k,i;
        scanf(" %d%d",&n,&k);
        int a[n][2],b[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i][0]);
            a[i][1]=i;
        }
        for(i=0;i<n;i++)
        {
            scanf(" %d",&b[i]);
        }
        qsort(a,n,sizeof(int)*2,pair);
        qsort(b,n,sizeof(int),f);
        int c[n];
        for(i=0;i<n;i++)
        {
            c[a[i][1]]=b[i];
        }
        for(i=0;i<n;i++)
            printf("%d ",c[i]);
        printf("\n");
    }
    return 0;
}
