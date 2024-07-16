#include<stdio.h>
//#include<stdlib.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        long long n,i,j,min=0,count=0;
        scanf(" %lld",&n);
        long long array[n];
        for(i=0; i<n; i++)
        {
            scanf(" %lld",&array[i]);
        }
        long long frequency[n+1];
        memset(frequency,0,sizeof(long long)*(n+1));
        for(i=0; i<n; i++)
        {
            frequency[array[i]]++;
        }
        for(i=0; i<n+1; i++)
        {
            if(frequency[i]>=2)
            {
                count+=min*frequency[i]*(frequency[i]-1)/2;
            }
            if(frequency[i]>=3)
            {
                count+=frequency[i]*(frequency[i]-1)*(frequency[i]-2)/6;
            }
            min+=frequency[i];
        }
        printf("%lld\n",count);
    }
    return 0;
}
