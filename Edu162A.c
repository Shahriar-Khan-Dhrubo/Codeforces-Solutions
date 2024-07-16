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
        int n,i,first1=-1,last1=-1,count0=0,count1=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
            if(a[i]==1)
                count1++;
            if(a[i]==1 && first1==-1)
                first1=i;
            else if(a[i]==1)
                last1=i;
        }
        if(count1==1 || count1==n)
            printf("0\n");
        else
        {
            for(i=first1;i<last1;i++)
            {
                if(a[i]==0)
                    count0++;
            }
            printf("%d\n",count0);
        }
    }
    return 0;
}
