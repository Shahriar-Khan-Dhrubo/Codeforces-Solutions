#include<stdio.h>
int main()
{
    int n,i,max;
    scanf(" %d",&n);
    int enter[n],exit[n],capacity[n];
    for(i=0;i<n;i++)
    {
       scanf(" %d %d",&exit[i],&enter[i]);
    }
    capacity[0]=enter[0];
    for(i=1;i<n;i++)
    {
        capacity[i]=capacity[i-1]-exit[i]+enter[i];
    }
    max=capacity[0];
    for(i=1;i<n;i++)
    {
        if(max<capacity[i])
        {
            max=capacity[i];
        }
    }
    printf("%d",max);
    return 0;
}
