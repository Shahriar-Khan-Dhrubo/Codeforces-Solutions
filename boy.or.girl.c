#include<stdio.h>
#include<string.h>
int main()
{
    char name[101],ch;
    int i,distinctCount=0,alphabet[27]={0};
    scanf(" %s",name);

    for(i=0;i<strlen(name);i++)
    {
        ch=name[i];
        if(ch>='a' && ch<='z')
        {
            alphabet[ch-'a']++;
        }
    }
    for(i=0;i<27;i++)
    {
        if(alphabet[i]>0)
            distinctCount++;
    }
    if(distinctCount%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
