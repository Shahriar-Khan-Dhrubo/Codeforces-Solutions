#include<stdio.h>
#include<math.h>
#include<limits.h>
int gcd(int a,int b)
{
    return b==0 ? a : gcd(b,a%b);
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,ans=0,k;
        scanf(" %d",&n);
        int p[n+1];
        p[0]=0;
        for(i=1; i<=n; i++)
        {
            scanf(" %d",&p[i]);
            k=abs(i-p[i]);
            if(k!=0)
                ans=gcd(ans,k);
        }
        printf("%d\n",ans);
    }
    return 0;
}
