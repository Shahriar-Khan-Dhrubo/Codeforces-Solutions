#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        char s[51];
        scanf(" %s",s);
        int size=strlen(s);
        if(size==2)
        {
            if(s[0]=='(' && s[1]==')')
                printf("NO\n");
            else if(s[0]==s[1])
            {
                printf("YES\n()()\n");
            }
            else
                printf("YES\n(())\n");
        }
        else
        {
            printf("YES\n");
            if(s[0]==s[1] || (s[0]=='(' && s[1]==')' && s[2]==')') )
            {
                for(int i=0; i<size; i++)
                {
                    printf("()");
                }
                printf("\n");
            }
            else //if(s[0]!=s[1] || (s[0]=='(' && s[1]==')' && s[2]=='('))
            {
                for(int i=0; i<2*size; i++)
                {
                    if(i<size)
                        printf("(");
                    else
                        printf(")");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
