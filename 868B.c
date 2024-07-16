#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,k,i,x,check=0;
        scanf(" %d%d",&n,&k);
        for(i=1;i<=n;i++)
        {
            scanf(" %d",&x);
            if(x%k!=i%k)
                check++;
        }
        if(check==0)
            printf("0\n");
        else if(check>2)
            printf("-1\n");
        else
            printf("1\n");
    }
    return 0;
}
