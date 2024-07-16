#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define limit 1000000001
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
        long long n,k;
        scanf(" %lld",&n);
        int value=log2(n);
        printf("%lld\n",n==1 ? 1 : (long long)pow(2,value));
    }
    return 0;
}
