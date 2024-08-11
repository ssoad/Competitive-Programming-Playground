#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m],b[n];
     for(int j=0;j<m;j++)
        {
            cin>>a[j];
        }

        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
    int num=0,ch;
    for(int i=1;i<=100;i++)
    {
        ch=0;
        for(int j=0;j<m;j++)
        {
            if(i%a[j]!=0)
            {
                ch=1;
            }
        }

        for(int j=0;j<n;j++)
        {
            if(b[j]%i!=0)
            {
                ch=1;
            }
        }

        if(ch==0)
        {
            num++;
        }

    }
    cout<<num;
    return 0;
}
