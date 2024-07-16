#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
        int n,i,sum=0,count=0,count1=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
            sum+=a[i];
            if(a[i]%3==1)
                count++;
            if(a[i]%3==2)
                count1++;
        }
        if( (n==1 && a[0]%3!=0)  || sum%3==2)
            printf("1\n");
        else if(sum%3==0 || (n==1 && a[0]%3==0) )
            printf("0\n");
        else if(sum%3==1 && count!=0)
            printf("1\n");
        else if(sum%3==1 && count==0)
            printf("2\n");
    }
    return 0;
}
