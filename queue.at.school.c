#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    scanf(" %d %d",&n,&t);
    char string[n+1];
    scanf(" %s",string);
    for(int i=1; i<=t; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            if(string[j]=='B' && string[j+1]=='G')
            {
                char temp=string[j];
                string[j]=string[j+1];
                string[j+1]=temp;
                j++;
            }
        }
    }
    string[n+1]='\0';
    printf("%s\n",string);
    return 0;
}
