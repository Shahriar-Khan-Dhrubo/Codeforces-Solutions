#include<stdio.h>
int main()
{
    int test_cases,i;
    scanf(" %d",&test_cases);
    for(i=1; i<=test_cases; i++)
    {
        long long int a,b,count=0;
        scanf(" %lld %lld",&a,&b);
        if(a==b)
            printf("Bob\n");
        else
        {
            count=llabs(a-b);
            if(count%2==0)
                printf("Bob");
            else
                printf("Alice");
            printf("\n");
        }
    }
    return 0;
}
