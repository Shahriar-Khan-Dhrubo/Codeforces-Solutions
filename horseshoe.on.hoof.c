#include<stdio.h>
#include<stdlib.h>
long int compare(const void *a,const void *b)
{
    return (*(long int *)a < *(long int *)b ? -1:1);
}
int main()
{
    long int a[4]= {0};
    int count=0;
    for(int i=0; i<4; i++)
    {
        scanf(" %ld",&a[i]);
    }
    //int size=sizeof(a)/sizeof(a[0]);
    qsort(a,4,sizeof(long int),compare);
    for(int i=0; i<3; i++)
    {
        if(a[i]==a[i+1])
            count++;
    }
    printf("%d",count);
    return 0;
}
