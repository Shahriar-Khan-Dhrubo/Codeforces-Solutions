//time exceeds on test 6.after completing STL need to solve again
#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,x,y,i,j,count=0;
        scanf(" %d%d%d",&n,&x,&y);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
               if( (a[i]+a[j])%x==0 && (a[i]-a[j])%y==0 )
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
