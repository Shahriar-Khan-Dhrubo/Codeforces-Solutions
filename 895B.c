#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,min=1e9;
        scanf(" %d",&n);
        int a[n][2];
        for(i=0;i<n;i++)
        {
            scanf(" %d%d",&a[i][0],&a[i][1]);
        }
        int b[n];
        for(i=0;i<n;i++)
        {
            b[i]=a[i][0]+ceil((a[i][1]-2)/2.0);
            //printf("%d ",b[i]);
        }
        //printf("\n");
        for(i=0;i<n;i++)
        {
            min=(b[i]<min ? b[i] : min);
        }
        printf("%d\n",min);
    }
    return 0;
}
