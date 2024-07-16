#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,x;
        scanf(" %d",&n);
        int frequency[26]= {0};
        char alphabet[27]="abcdefghijklmnopqrstuvwxyz";
        for(i=0; i<n; i++)
        {
            scanf(" %d",&x);
            for(int j=0; j<26; j++)
            {
                if(frequency[j]==x)
                {
                    printf("%c",alphabet[j]);
                    frequency[j]++;
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
