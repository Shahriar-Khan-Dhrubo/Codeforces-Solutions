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
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,ans=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
            ans+=abs(a[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}
