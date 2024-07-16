#include<stdio.h>
int main()
{
    long long int n,count=0;
    scanf(" %lld",&n);
    while(n!=0)
    {
        if(n%10==4||n%10==7)
            count++;
        n=n/10;
    }
    //printf("%lld\n",count);
    if(count==4||count==7)
        printf("YES");
    else
        printf("NO");
    return 0;
}
