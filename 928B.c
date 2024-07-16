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
        int n,i,j,count;
        scanf(" %d",&n);
        int b[n];
        for(i=0;i<n;i++)
        {
            char a[n+1];
            scanf(" %s",a);
            count=0;
            for(j=0;j<n;j++)
            {
                count+=a[j];
            }
            b[i]=count;
        }
        qsort(b,n,sizeof(int),f);
        if(b[0]!=b[1])
            printf("TRIANGLE\n");
        else
            printf("SQUARE\n");

    }
    return 0;
}
