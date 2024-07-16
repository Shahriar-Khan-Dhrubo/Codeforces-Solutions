#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,count=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
        }
        int s=1e8,t=1e8;
        for(i=0; i<n; i++)
        {
            if(s>t)
                swap(&s,&t);
            if(a[i]<=s)
                s=a[i];
            else if(a[i]<=t)
                t=a[i];
            else
            {
                s=a[i];
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
