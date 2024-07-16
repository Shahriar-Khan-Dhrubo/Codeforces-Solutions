#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a < *(int *)b) ? -1:1;
}
int f(int *a,int *b)
{
    return *a-*b;
}
void reverseString(char *str)
{
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n;
        scanf(" %d",&n);
        char s[101],ans[101];
        scanf(" %s",s);
        strcpy(ans,s);
        //ans[100]='\0';
        reverseString(ans);
        //strrev(ans);
        ans[100]='\0';
        if(strcmp(s,ans)<0)
        {
            printf("%s\n",s);
        }
        else if(strcmp(s,ans)>0)
        {
            printf("%s%s\n",ans,s);
        }
        else
        {
            printf("%s\n",s);
        }
    }
    return 0;
}
