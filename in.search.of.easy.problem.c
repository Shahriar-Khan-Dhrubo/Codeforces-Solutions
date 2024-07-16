#include<stdio.h>
int main()
{
    int n,easy=0;
    scanf(" %d",&n);
    int array[100]={0};
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(array[i]!=0)
        {
            easy++;
            break;
        }
    }
    if(easy==0)
        printf("Easy");
    else
        printf("Hard");
    return 0;
}
