#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,lower=0,upper=0;
        scanf(" %d",&n);
        char a[n+1];
        scanf(" %s",a);
        for(i=0; i<n; i++)
        {
            if(a[i]!='B')
                break;
            else
                lower++;
        }
        for(i=n-1; i>=0; i--)
        {
            if(a[i]!='A')
                break;
            else
                upper++;
        }
        if(n-lower-upper>0)
            printf("%d\n",n-lower-upper-1);
        else
            printf("0\n");
    }
    return 0;
}
