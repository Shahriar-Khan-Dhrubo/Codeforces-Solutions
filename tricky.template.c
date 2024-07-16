#include<stdio.h>
#include<string.h>
int main()
{
    int test,i;
    scanf(" %d",&test);
    for(i=1; i<=test; i++)
    {
        int n,j,count1=0,count2=0;
        scanf(" %d",&n);
        char a[n+1],b[n+1],c[n+1];
        scanf(" %s %s %s",a,b,c);
        for(j=0; j<n; j++)
        {
            if(a[j]!=c[j] && b[j]!=c[j])
                count1++;
            else if(a[j]==c[j] || b[j]==c[j])
                count2++;

        }
        //printf("%d %d",count1,count2);
        if(count1>0 && count2>=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
