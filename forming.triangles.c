//time limit exceeds on 3rd test need to find another algorithm to solve it
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int compare(void const *a,void const *b)
{
    return (*(int *)a< *(int *)b ? -1:1);
}
int main()
{
    int test,i;
    scanf(" %d",&test);
    for(i=1; i<=test; i++)
    {
        int n,j,k,l;
        long long count=0;
        scanf(" %d",&n);
        long long length[n];
        for(j=0; j<n; j++)
        {
            scanf(" %lld",&length[j]);
            length[j]=pow(2,length[j]);
        }
        qsort(length,n,sizeof(long long),compare);
        /*for (int i = 0; i < n - 2; i++) {
            int k = i + 2;

            for (int j = i + 1; j < n - 1; j++) {
                while (k < n && length[i] + length[j] > length[k]) {
                    k++;
                }

                count += (k - j - 1);
            }
        }*/
        for(j=0; j<n-2; j++)
        {
            l=j+2;
            for(k=j+1; k<n-1; k++)
            {
                /*for(l=k+1;l<n;l++)
                {
                    if(length[j]+length[k]>length[l] && length[k]+length[l]>length[j] && length[j]+length[l]>length[k])
                        count++;
                }*/
                while(l<n && length[j]+length[k]>length[l])
                    k++;
            }
        }
        printf("%lld\n",count);
    }
    return 0;
}
