#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define alphabet_size 26
int main()
{
    char word[101];
    scanf("%s",word);
    int small[alphabet_size]={0},upper[alphabet_size]={0};
    int i;
    for(i=0;i<strlen(word);i++)
    {
        char c=word[i];
        if(c>='a' && c<='z')
        {
            small[c-'a']++;
        }
        else if(c>='A' && c<='Z')
        {
            upper[c-'A']++;
        }
    }
    int small_count=0,upper_count=0;
    int sum1=0;
    for(i=0;i<alphabet_size;i++)
    {
       int x=small[i];
       sum1=sum1+x;
    }
    int sum2=0;
    for(i=0;i<alphabet_size;i++)
    {
        int y=upper[i];
        sum2=sum2+y;
    }
    if(sum1>sum2 || sum1==sum2)
    {
       for(i=0;i<strlen(word);i++)
       {
           word[i]=tolower(word[i]);
       }
       printf("%s",word);
    }
    else if(sum2>sum1)
    {
        for(i=0;i<strlen(word);i++)
        {
            word[i]=toupper(word[i]);
        }
        printf("%s",word);
    }
    return 0;
}
