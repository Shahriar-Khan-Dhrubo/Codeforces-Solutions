#include<stdio.h>
#include<string.h>
int main()
{
    int test_cases,i;
    scanf(" %d",&test_cases);
    for(i=1; i<=test_cases; i++)
    {
        int length,count1=0,count2=0,j,penalty;
        scanf(" %d",&length);
        char string[length+1];
        scanf(" %s",string);
        for(j=0; j<strlen(string); j++)
        {
            switch(string[j])
            {
            case '+':
                count1++;
                break;
            case '-':
                count2++;
                break;
            }
        }
        penalty=abs(count1-count2);
        printf("%d\n",penalty);
    }
    return 0;
}
