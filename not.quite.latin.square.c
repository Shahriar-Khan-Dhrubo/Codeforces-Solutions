#include<stdio.h>
int main()
{
    int n,i,j,k;
    char array[3][3];
    scanf(" %d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                scanf(" %c",&array[j][k]);
            }
        }
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                while(array[j][k]=='?')
                {
                    if((array[j][0]!='A')&&(array[j][1]!='A')&&(array[j][2]!='A'))
                        printf("A");
                    else if((array[j][0]!='B')&&(array[j][1]!='B')&&(array[j][2]!='B'))
                        printf("B");
                    else if((array[j][0]!='C')&&(array[j][1]!='C')&&(array[j][2]!='C'))
                        printf("C");
                    printf("\n");
                    break;
                }
            }
        }
    }
    return 0;
}
