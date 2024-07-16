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
        int n,m,k,i,j,count=0;
        scanf(" %d%d%d",&n,&m,&k);
        int a[n],b[m];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
        }
        for(i=0; i<m; i++)
        {
            scanf(" %d",&b[i]);
        }
        //qsort(a,n,sizeof(int),f);
        //qsort(b,m,sizeof(int),f);
        for(i=0; i<n; i++)
        {
            //if(a[i]==k)
            //break;
            for(j=0; j<m; j++)
            {
                //if(b[j]==k)
                //break;
                if(a[i]+b[j]<=k)
                    count++;
            }

        }
        printf("%d\n",count);
    }
    return 0;
}
