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
        int a[3]={0},i;
        for(i=0;i<3;i++)
        {
            scanf(" %d",&a[i]);
        }
        qsort(a,3,sizeof(int),compare);
        if(a[0]==a[1] && a[0]==a[2])
            printf("YES\n");
        if(a[1]%a[0]==0 && a[2]%a[0]==0 && ( (a[1]/a[0])-1+(a[2]/a[0])-1 <=3))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
