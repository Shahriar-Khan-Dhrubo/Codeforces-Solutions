#include<stdio.h>
#include<string.h>
int main()
{
    char string[101];
    int i,j,min_index;
    fgets(string,sizeof(string),stdin);
    for(i=0; i<strlen(string); i=i+2)
    {
        min_index=i;
        for(j=i+2; j<strlen(string); j=j+2)
        {
            if(string[j]<string[min_index])
            {
                min_index=j;
            }
        }
        char temp=string[i];
        string[i]=string[min_index];
        string[min_index]=temp;
    }
    printf("%s",string);
    return 0;
}
