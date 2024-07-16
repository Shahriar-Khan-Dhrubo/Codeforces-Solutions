#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b) ? -1:1;
}
int f(int *a,int *b)
{
    return *a-*b;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int a,b,l,x,y,k[400],m=0,ans=1;
        scanf(" %d%d%d",&a,&b,&l);
        for(x=1;l%x==0;x*=a)
        {
            for(y=1;l%(x*y)==0;y*=b)
            {
                    k[m++]=l/(x*y);
            }
        }
        qsort(k,m,sizeof(int),f);
        for(x=0;x<m-1;x++)
        {
            if(k[x]!=k[x+1])
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
