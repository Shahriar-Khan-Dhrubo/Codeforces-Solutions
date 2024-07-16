#include<stdio.h>
#include<stdlib.h>
int compare(int *a,int *b)
{
    return (*a-*b);
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,l=0;
        scanf(" %d",&n);
        int a[200001]={0};
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
        }
        qsort(a,n,4,compare);
        for(i=0; i<n; i++)
        {
            if(a[i]!=a[i+1] || i==n-1)// i==n-1 is mandatory. without it code gives wrong result for some specific testcase
                a[l++]=a[i];
        }
        int p=0,count=0;
        for(i=0; i<l; i++)
        {
            while(a[i]-a[p]>=n)
            {
                p++;
            }
            if(count < i-p+1)
                count= i-p+1;
        }
        printf("%d\n",count);
    }
    return 0;
}
