#include<stdio.h>
#include<limits.h>
int min(int a,int b)
{
    return a<b ? a:b;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,j,k,l,ans=INT_MAX,total;
        scanf(" %d",&n);
        for(i=0; i<=2; i++)
        {
            for(j=0; j<=1; j++)
            {
                for(k=0; k<=6; k++)
                {
                    for(l=0; l<=2; l++)
                    {
                        if(n>=1*i+3*j+6*k+10*l)
                            total=n-(1*i+3*j+6*k+10*l);
                        if(total%15==0)
                            ans=min(ans,i+j+k+l+(total/15));
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
