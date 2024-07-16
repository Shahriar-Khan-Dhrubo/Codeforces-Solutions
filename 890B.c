#include<stdio.h>
//#include<stdlib.h>
/*long long f(const void *a,const void *b)
{
    return (*(long long *)a < *(long long *)b);
}*/
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int n,i,count1=0;
        long long sum=0;
        scanf(" %d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf(" %d",&a[i]);
            sum+=a[i];
            if(a[i]==1)
                count1++;
        }
        //qsort(a,n,sizeof(long long),f);
        printf("%s",sum>=n+count1 && n>1 ? "YES\n" : "NO\n");
    }
    return 0;
}
