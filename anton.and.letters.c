#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    fgets(a,sizeof(a),stdin);
    int count=0;
    int alphabet[26]={0};
    for(int i=1;i<strlen(a);i+=3)
    {
        char c=a[i];
        if(c>='a' && c<='z')
            alphabet[c-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(alphabet[i]>0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
