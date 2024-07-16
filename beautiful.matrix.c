#include<stdio.h>
int main()
{
    int array[5][5];
    int i,j,x,y,counti=0,countj=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf(" %d ",&array[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(array[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    if(x>2)
    {
        counti=x-2;
    }
    if(x<2)
    {
        counti=2-x;
    }
    if(y>2)
    {
        countj=y-2;
    }
    if(y<2)
    {
        countj=2-y;
    }
    printf("%d",counti+countj);

    return 0;
}
