#include<stdio.h>
#include<string.h>
#define limit 200001
int main()
{
    int t,i;
    scanf(" %d",&t);
    while(t--)
    {
        char s[limit];
        scanf(" %s",s);
        int length=strlen(s);
        if(s[0]==s[1] || (length!=3 && s[0]=='b' && s[1]=='a') )
            printf("%c %c %s\n",s[0],s[1],s+2);
        else
        {
            if(length==3)
            {
                printf("%c %c %c\n",s[0],s[1],s[2]);
            }
            else
            {
                printf("%c ",s[0]);
                printf("%.*s",length-2,s+1);
                printf(" %c\n",s[length-1]);
            }
        }
    }
    return 0;
}
