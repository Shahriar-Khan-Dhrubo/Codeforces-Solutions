#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,min,max,i;
        scanf(" %d",&n);
        char a[n+1];
        scanf(" %s",a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='B')
            {
                min=i;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]=='B')
            {
                max=i;
            }
        }
        printf("%d\n",(max-min+1));
    }
    return 0;
}
