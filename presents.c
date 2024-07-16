#include<stdio.h>
int main()
{
    int n;
    scanf(" %d",&n);
    int a[102]={0},b[102]={0};
    for(int i=1;i<n+1;i++)
    {
        scanf(" %d",&a[i]);
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(a[j]==i)
                b[i]=j;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
