#include<stdio.h>
int compare(const void *a,const void *b)
{
    return (*(int *)a < *(int *)b ? -1:1);
}
void print_array(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        scanf(" %d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf(" %d",&b[i]);
        }
        int c[n];
        for(i=0;i<n;i++)
        {
            c[a[i]-1]=b[i];
        }
        qsort(a,n,sizeof(int),compare);
        print_array(a,n);
        print_array(c,n);
    }
    return 0;
}
