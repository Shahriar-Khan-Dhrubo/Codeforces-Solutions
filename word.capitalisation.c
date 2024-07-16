#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[1000],firstCh;
    int i;
    scanf(" %s",&name);

    firstCh= toupper(name[0]);
    printf("%c",firstCh);
    for(i=1;i<strlen(name);i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}
