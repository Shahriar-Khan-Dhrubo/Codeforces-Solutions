#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,k,i;
        scanf(" %d%d",&n,&k);
        int heal[n],pos[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&heal[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf(" %d",&pos[i]);
        }
        long long check[n+1];
        memset(check,0,(n+1)*sizeof(long long));
        for(i=1;i<=n;i++)
        {
            check[abs(pos[i-1])]+=heal[i-1];
        }
        long long bullet=k;
        for(i=1;i<=n;i++)
        {
            bullet=bullet-check[i];
            if(bullet<0)
            {
                printf("NO\n");
                break;
            }
            bullet+=k;
            if(i==n)
            printf("YES\n");
        }
    }
    return 0;
}
