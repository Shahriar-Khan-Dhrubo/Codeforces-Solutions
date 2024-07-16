#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
    scanf(" %s",s);
    scanf(" %s",t);
    int i,length,count=0;
    length=strlen(s);
    for(i=0;i<length/2;i++)
    {
        char temp=s[i];
        s[i]=s[length-i-1];
        s[length-i-1]=temp;
    }
    s[length]='\0';
    for(i=0;i<length;i++)
    {
        if(s[i]!=t[i])
          count++;
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
