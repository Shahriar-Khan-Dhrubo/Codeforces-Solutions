#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
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
        int n;
        double k,corner;
        scanf(" %d%lf",&n,&k);
        corner=4*n-2;
        if(k==corner)
            printf("%d\n",(int)k/2+1);
        else
            printf("%d\n",(int)ceil(k/2));
    }
    return 0;
}
