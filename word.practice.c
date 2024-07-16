#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char word[101];
    scanf(" %s",word);
    int i,count_lower=0,count_upper=0;
    for(i=0;i<strlen(word);i++)
    {
        char c=word[i];
        if(c==tolower(c))
        {
            count_lower++;
        }
        else
            count_upper++;
    }
    if(count_lower>=count_upper)
    {
        for(i=0;i<strlen(word);i++)
        {
            word[i]=tolower(word[i]);
        }
        printf("%s",word);
    }
    else
    {
        for(i=0;i<strlen(word);i++)
        {
            word[i]=toupper(word[i]);
        }
        printf("%s",word);
    }
    return 0;
}
