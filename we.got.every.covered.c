#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,k;
        scanf(" %d %d",&n,&k);
        char alphabet[]="abcdefghijklmnopqrstuvwxyz";
        char s[n*k+1];
        for(int i=0;i<n*k;i++)
        {
            s[i]=alphabet[i%k];
        }
        s[n*k]='\0';
        printf("%s\n",s);
    }
    return 0;
}
