#include<stdio.h>
int main()
{
    int n,i,count=0;
    int petya,vasya,tonya;
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d %d",&petya,&vasya,&tonya);
        if(petya+vasya+tonya>=2)
            count++;
    }
    printf("%d",count);
    return 0;
}
