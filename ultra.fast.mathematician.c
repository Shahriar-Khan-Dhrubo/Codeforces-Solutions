#include<stdio.h>
#include<string.h>
int main()
{
    char a[101]={0},b[101]={0},c[101]={0};
    scanf(" %s",a);
    scanf(" %s",b);
    int length=strlen(a);
    for(int i=0;i<length;i++)
    {
        if(a[i]==b[i])
            c[i]='0';
        else
            c[i]='1';
    }
    c[length]='\0';
    printf("%s",c);
    return 0;
}
