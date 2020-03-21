#include<iostream>
#define stop return 0;
#define soad_start int main()
using namespace std;

soad_start
{
    int m,n;
    cin>>n>>m;
    if(n>m)
    {
        swap(n,m);
    }

    if(n%2!=0)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
        cout<<"Malvika"<<endl;
    }
    stop
}

