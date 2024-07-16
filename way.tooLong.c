#include <stdio.h>
#include <string.h>
void clearBuffer();
int main()
{
    int n, i;
    scanf(" %d", &n);
    clearBuffer();
    char string[n][101], ch;
    for (i = 0; i < n; i++)
    {
        scanf(" %s",&string[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (strlen(string[i]) <= 10)
        {
            printf("%s\n", string[i]);
        }
        else
        {
            ch = string[i][0];
            printf("%c", ch);
        int length = strlen(string[i]) - 2;
            printf("%d", length);
            ch= string[i][strlen(string[i])-1];
            printf("%c",ch);
            printf("\n");
        }
    }

    return 0;
}
void clearBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}
