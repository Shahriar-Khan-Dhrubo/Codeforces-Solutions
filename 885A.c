#include<stdio.h>
void check(int x,int y,int k)
{
    int ans=0;
    for(int i=0; i<k; i++)
    {
        int a,b;
        scanf(" %d%d",&a,&b);
        if( (x+y) %2 == (a+b) %2 )
            {
                ans=1;
            }
    }
    printf("%s\n",ans==0 ? "YES" : "NO");
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,m,k;
        scanf(" %d%d%d",&n,&m,&k);
        int x,y;
        scanf(" %d%d",&x,&y);
        check(x,y,k);
    }
    return 0;
}
