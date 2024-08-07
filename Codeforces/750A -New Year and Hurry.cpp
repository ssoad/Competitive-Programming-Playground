#include<iostream>
using namespace std;
#define sssoad int main()
#define stop return 0;

sssoad
{
    int n,k;
    cin>>n>>k;
    int time=k,i;
    for(i=1;i<=n;i++)
    {
        time+=5*i;
        if(time>240)
            break;
    }
    cout<<i-1;
    stop;
}
