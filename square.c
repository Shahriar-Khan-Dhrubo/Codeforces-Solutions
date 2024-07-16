#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test_cases,i;
    scanf(" %d",&test_cases);
    for(i=1; i<=test_cases; i++)
    {
        int square[4][2],y1,y2,area;
        int j,k;
        for(j=0; j<4; j++)
        {
            for(k=0; k<2; k++)
            {
                scanf(" %d",&square[j][k]);
            }
        }
        if(square[0][0]==square[1][0])
        {
            y1=square[0][1];
            y2=square[1][1];
        }
        else if(square[0][0]==square[2][0])
        {
            y1=square[0][1];
            y2=square[2][1];
        }
        else if(square[0][0]==square[3][0])
        {
            y1=square[0][1];
            y2=square[3][1];
        }
        area=abs(y1-y2)*abs(y1-y2);
        printf("%d\n",area);
    }
    return 0;
}
