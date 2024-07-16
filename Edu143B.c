#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,k,i,j,frequency[51];
        memset(frequency,0,sizeof(int)*51);
        scanf(" %d%d",&n,&k);
        for(i=1; i<=n; i++)
        {
            int l,r;
            scanf(" %d%d",&l,&r);
            if(k<=r && k>=l)
            {
                for(j=l; j<=r; j++)
                    frequency[j]++;
            }
        }
        for(i=1; i<51; i++)
            if(frequency[i]>=frequency[k] && i!=k)
                break;
        printf("%s\n",i<=50 ? "NO" : "YES");
    }
    return 0;
}
