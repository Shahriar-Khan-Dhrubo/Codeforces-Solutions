#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b) ? -1:1;
}
int f(int *a,int *b)
{
    return *b-*a;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        scanf(" %d",&n);
        int j=n,k=1;
        int p[100000]= {0};
        if(j%2==0)
        {
            for(i=0;i<n;i+=2)
            {
                p[i]=j;
                j-=2;
            }
            for(i=1;i<n;i+=2)
            {
                p[i]=k;
                k+=2;
            }
        }
        else
        {
            for(i=0;i<n;i+=2)
            {
                p[i]=k;
                k+=2;
            }
            for(i=1;i<n;i+=2)
            {
                p[i]=j-1;
                j-=2;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d ",p[i]);
        }
        printf("\n");
    }
    return 0;
}
