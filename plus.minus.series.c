// 1-2+3-4+....-....+N
#include<stdio.h>
int main()
{
    int n,odd=0,even=0,i;
    printf("Enter N :");
    scanf(" %d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            odd=odd+i;
        }
        else
        {
            even=even+i;
        }

    }
    printf("Sum = %d",odd-even);


    return 0;
}
