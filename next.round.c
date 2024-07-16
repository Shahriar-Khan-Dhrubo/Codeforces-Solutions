#include<stdio.h>
int main()
{
    int n,k,i,j=0,place,count=0;
    scanf(" %d %d", &n, &k);

    int a[n];
    for(i=0; i<n; i++)
    {
        scanf(" %d", &a[i]);
    }
    place=a[k-1];
    while(a[j]>=place && a[j]>0 && j<n)
    {
        count++;
        j++;
    }
    printf("%d",count);
    return 0;
}
