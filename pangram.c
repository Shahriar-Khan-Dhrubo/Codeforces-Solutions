#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    scanf(" %d",&n);
    int alphabet[26]= {0};
    char a[n+1];
    scanf(" %s",a);
    strlwr(a);
    for(i=0; i<n+1; i++)
    {
        char c=a[i];
        if(c>='a'&& c<='z')
        {
            alphabet[c-'a']++;
        }
    }
    for(i=0; i<26; i++)
    {
        if(alphabet[i]==0)
            count++;
    }
    if(count==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
