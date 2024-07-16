#include<stdio.h>
#include<math.h>
int main()
{
    int test_case,n,a,i,j,k;
    scanf(" %d",&test_case);
    for(i=1; i<=test_case; i++)
    {
        scanf(" %d",&n);
        long long int sum=0;
        long long int buckets[n];
        for(j=0; j<n; j++)
        {
            scanf(" %lld",&buckets[j]);
        }
        for(k=0; k<n; k++)
        {
            sum=sum+buckets[k];
        }
        if((double)sqrt(sum)==floor(sqrt(sum)))
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
