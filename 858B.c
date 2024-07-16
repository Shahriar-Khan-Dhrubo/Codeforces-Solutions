#include<stdio.h>
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,count_0=0,nonzero=0,max_value=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
            a[i]==0 ? count_0++ : nonzero++ ;
            max_value=a[i]> max_value ? a[i] : max_value;
        }
        if(count_0<=nonzero+1)
            printf("0\n");
        else if(count_0>nonzero+1 && max_value!=1)
            printf("1\n");
        else
            printf("2\n");

    }
    return 0;
}
