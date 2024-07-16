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
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        char s[5+1];
        int count1=0,count2=0;
        scanf(" %s",s);
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A')
                count1++;
            else
                count2++;
        }
        printf("%c\n",(count1>count2 ? 'A' : 'B'));
    }
    return 0;
}
