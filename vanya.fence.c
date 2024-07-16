#include<stdio.h>
int main()
{
    int n,h,i,length=0;
    scanf(" %d %d",&n,&h);
    int height[n];
    for(i=0;i<n;i++)
    {
        scanf(" %d",&height[i]);
    }
    for(i=0;i<n;i++)
    {
        if(height[i]>h)
        {
            length=length+2;
        }
        else
        {
            length++;
        }
    }
    printf("%d",length);
    return 0;
}
