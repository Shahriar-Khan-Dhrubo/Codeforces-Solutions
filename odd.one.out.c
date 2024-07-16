#include<stdio.h>
int main()
{
    int test_case,i,j;
    scanf("%d",&test_case);
    int num[test_case][3];

    for(i=0; i<test_case; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0; i<test_case; i++)
    {
        if(num[i][0]==num[i][1])
        {
            printf("%d",num[i][2]);
        }
        else if(num[i][1]==num[i][2])
        {
            printf("%d",num[i][0]);
        }
        else
        {
            printf("%d",num[i][1]);
        }
        printf("\n");
    }

    return 0;
}
