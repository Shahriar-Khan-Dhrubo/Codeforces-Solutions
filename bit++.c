#include<stdio.h>
int main()
{
    int n,i,j,x=0;
    scanf(" %d",&n);
    char a[n][3];

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
   for(i=0;i<n;i++)
   {
       switch(a[i][1])
       {
       case '+':
        x++;
        break;
       case '-':
        x--;
        break;
       }
   }
    printf("%d",x);
    return 0;
}
