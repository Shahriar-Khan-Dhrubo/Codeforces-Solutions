#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n;
        scanf(" %d",&n);
        if (n <= 28)
        {
            printf("aa%c\n",96+n-2);
        }
        else if (n <= 53)
        {
            printf("a%cz\n",96+n-27);
        }
        else
        {
            printf("%czz\n",96+n-52);
        }
    }
    return 0;
}
