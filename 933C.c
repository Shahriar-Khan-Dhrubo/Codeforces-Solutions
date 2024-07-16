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
int occurrences(const char *string,const char *sub1,const char *sub2)
{
    int count1=0,count2=0;
    int sub1_length=strlen(sub1);
    int sub2_length=strlen(sub2);
    const char *position=string;
    while ((position = strstr(position, sub1)) != NULL) {
        count1++;
        position += sub1_length;
    }
    position = string;
    while ((position = strstr(position, sub2)) != NULL) {
        count2++;
        position += sub2_length;
    }
    return count1+count2;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,count=0;
        scanf(" %d",&n);
        char s[n+1];
        scanf(" %s",s);
        for(i=0;i<n-2;i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')
            {
                count++;
                i=i+2;
            }
        }
        for(i=0;i<n-2;i++)
        {
            if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e')
            {
                count++;
                i=i+2;
            }
        }
        for(i=0;i<n-4;i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e')
            {
                count--;
                i=i+4;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

