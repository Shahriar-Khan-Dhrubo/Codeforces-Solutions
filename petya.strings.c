#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[100],str2[100],ch1,ch2;
    int i,sum1=0,sum2=0;
    scanf(" %s",&str1);
    scanf(" %s",&str2);

    for(i=0; i<strlen(str1); i++)
    {
        str1[i]=tolower(str1[i]);
    }
    str1[strlen(str1)]='\0';
    for(i=0; i<strlen(str2); i++)
    {
        str2[i]=tolower(str2[i]);
    }
    str2[strlen(str2)]='\0';
    int d=strcmp(str1,str2);
    if(d==0)
        printf("0");

    for(i=0; i<strlen(str1); i++)
    {
        ch1=str1[i];
        ch2=str2[i];
        if((int)ch1>(int)ch2)
        {
            printf("1");
            break;
        }
        else if((int)ch1<(int)ch2)
        {
            printf("-1");
            break;
        }
    }

    return 0;
}
