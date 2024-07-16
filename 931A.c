#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
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
    int t,x,i,j,k,l;
    long long ans;
    scanf(" %d",&t);
    while(t--)
    {
        int n;
        scanf(" %d",&n);
        int a[n];
        for(x=0;x<n;x++)
        {
            scanf(" %d",&a[x]);
        }
        qsort(a,n,sizeof(int),f);
        i=a[0];
        l=a[n-1];
        j=a[n-2];
        k=a[1];
        ans=abs(i-j)+abs(j-k)+abs(k-l)+abs(l-i);
        printf("%lld\n",ans);
    }
    return 0;
}
