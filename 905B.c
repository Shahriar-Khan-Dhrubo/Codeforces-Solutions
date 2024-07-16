#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,k,i,count=0;
        scanf(" %d %d",&n,&k);
        char s[n+1];
        scanf(" %s",s);
        int frequency[26]={0};
        for(i=0;i<n;i++)
        {
            frequency[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(frequency[i]!=0 && frequency[i]%2!=0)
                count++;
        }
        if(count-1>k)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
