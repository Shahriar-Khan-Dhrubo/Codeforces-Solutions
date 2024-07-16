#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i;
        scanf(" %d",&n);
        char a[n+1];
        scanf(" %s",a);
        printf("%c",a[0]);
        for(i=1;i<n;i++)
        {
            if((a[i]=='b' || a[i]=='c' || a[i]=='d')&&(a[i+1]=='a' || a[i+1]=='e'))
            {
                printf(".%c%c",a[i],a[i+1]);
                i++;
            }
            else
            {
                printf("%c",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
