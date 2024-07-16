#include<stdio.h>
int main()
{
    int year;
    scanf(" %d",&year);
    int rem1,rem2,rem3,div1,div2,div3;
    year++;
    rem1=year%10;
    div1=year/10;
    rem2=div1%10;
    div2=div1/10;
    rem3=div2%10;
    div3=div2/10;
    while(rem1==rem2 || rem1==rem3 || rem1==div3 || rem2==rem3 || rem2==div3 || rem3==div3)
    {
        year++;
        rem1=year%10;
        div1=year/10;
        rem2=div1%10;
        div2=div1/10;
        rem3=div2%10;
        div3=div2/10;
    }
    printf("%d",year);
    return 0;
}
