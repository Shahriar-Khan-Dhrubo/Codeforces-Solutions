#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n%2!=0)
        {
            for(i=1; i<=n; i++)
                cout<<"1 ";
            cout<<endl;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(i==1)
                    cout<<"1 ";
                else if(i==2)
                    cout<<"3 ";
                else
                    cout<<"2 ";
            }
            cout<<endl;
        }
    }
    return 0;
}
