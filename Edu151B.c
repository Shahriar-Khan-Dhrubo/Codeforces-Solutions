#include<stdio.h>
int min(int a,int b)
{
    return a < b ? a : b;
}
void solve()
{
    int x,y,x1,y1,x2,y2,ans;
    scanf(" %d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
    int dx1=x1-x;
    int dy1=y1-y;
    int dx2=x2-x;
    int dy2=y2-y;
    if(dx1==0 && dx2==0)
    {
        if(dy1>0 && dy2>0)
            ans=min(dy1,dy2)+1;
        else if( dy1<0 && dy2<0 )
            ans=min(-dy1,-dy2)+1;
        else
            ans=1;
    }
    else if(dy1==0 && dy2==0)
    {
        if(dx1>0 && dx2>0)
            ans=min(dx1,dx2)+1;
        else if( dx1<0 && dx2<0 )
            ans=min(-dx1,-dx2)+1;
        else
            ans=1;
    }
    //else if( (dx1<0 && dy1==0 && dx2>0 && (dy2>0 || dy2<0)) || (dx1<0 && dy1>0 && dx1>0 && dy1>0))
    else if( (dx1<0 && dy1<0 && dx2>0 && dy2>0) || (dx1>0 && dy1>0 && dx2<0 && dy2<0) )
        ans=1;
    else if( (dx1<0 && dy1>0 && dx2>0 && dy2>0) || (dx1>0 && dy1>0 && dx2<0 && dy2>0) )
        ans=min(dy1,dy2)+1;
    else if( (dy1<0 && dx1>0 && dy2>0 && dx2>0) || (dy1>0 && dx1>0 && dy2<0 && dx2>0) )
        ans=min(dx1,dx2)+1;
    else if( (dx1>0 && dy1>0 && dx2>0 && dy2>0) )
        ans=min(dx1,dx2)+min(dy1,dy2)+1;
    else if( (dx1<0 && dy1<0 && dx2<0 && dy2<0) )
        ans=min(-dx1,-dx2)+min(-dy1,-dy2)+1;
    else
        ans=1;
    printf("%d\n",ans);
}
int main()
{
    int t;
    scanf(" %d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}
