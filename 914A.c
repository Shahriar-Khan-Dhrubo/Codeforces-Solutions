#include<stdio.h>
#include<math.h>
int count_forks(int a,int b,int xk,int yk,int xq,int yq)
{
    int forks=0;
    if(a!=b)
    {
        int k[8][2],q[8][2];
        int moves[8][2]= {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
        for(int i=0; i<8; i++)
        {
            int dx=moves[i][0];
            int dy=moves[i][1];
            k[i][0]=xk+dx;
            k[i][1]=yk+dy;
            q[i][0]=xq+dx;
            q[i][1]=yq+dy;
        }
        for(int i=0;i<8;i++)
        {
          for(int j=0;j<8;j++)
          {
              if(k[i][0]==q[j][0] && k[i][1]==q[j][1])
                forks++;
          }
        }
    }
    else
    {
        int k[4][2],q[4][2];
        int moves[4][2]= {{a,b},{a,-b},{-a,b},{-a,-b}};
        for(int i=0; i<4; i++)
        {
            int dx=moves[i][0];
            int dy=moves[i][1];
            k[i][0]=xk+dx;
            k[i][1]=yk+dy;
            q[i][0]=xq+dx;
            q[i][1]=yq+dy;
        }
        for(int i=0;i<4;i++)
        {
          for(int j=0;j<4;j++)
          {
              if(k[i][0]==q[j][0] && k[i][1]==q[j][1])
                forks++;
          }
        }
    }
    return forks;
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        int a,b,xk,yk,xq,yq;
        scanf(" %d%d",&a,&b);
        scanf(" %d%d",&xk,&yk);
        scanf(" %d%d",&xq,&yq);
        int result=count_forks(a,b,xk,yk,xq,yq);
        printf("%d\n",result);
    }
    return 0;
}

