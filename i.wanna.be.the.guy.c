#include<stdio.h>
int main()
{
    int n,x,y,i,limit,count=0;
    scanf(" %d",&n);
    scanf(" %d",&x);
    int a[x];
    for(i=0; i<x; i++)
    {
        scanf(" %d",&a[i]);
    }
    scanf(" %d",&y);
    int b[y];
    for(i=0; i<y; i++)
    {
        scanf(" %d",&b[i]);
    }
    int frequency[n+1];
    for(i=0; i<n+1; i++)
    {
        frequency[i]=0;
    }
    for(i=0; i<x; i++)
    {
        frequency[a[i]]++;
    }
    for(i=0; i<y; i++)
    {
        frequency[b[i]]++;
    }
    for(i=1; i<n+1; i++)
    {
        if(frequency[i]==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}
