#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    return a>b ? a:b;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,ans=1,count=1;
        scanf(" %d",&n);
        char s[n+1];
        scanf(" %s",s);
        for(i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
                count=1;
            ans=max(ans,count);
        }
        printf("%d\n",ans+1);
    }
    return 0;
}
