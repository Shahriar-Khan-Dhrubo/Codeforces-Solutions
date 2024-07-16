#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="I hate",s2[]="I love",s3[]="that",s4[]="it";
    int n;
    scanf(" %d",&n);
    for(int i=1; i<=n; i++)
    {
        if(i>1)
            printf("%s ",s3);
        if(i%2!=0)
        {
            printf("%s ",s1);
        }
        else if(i%2==0)
        {
            printf("%s ",s2);
        }
    }
    printf("%s",s4);
    return 0;
}
