#include<iostream>
using namespace std;
#define soads_game int main()
#define stop return 0;


soads_game
{
    long n(0);
    cin>>n;
    int p(0),c(0);
    long total(0);
    while(n--)
        {
            cin>>c;
        if(c!=p)
        {
            ++total;
        }
    p=c;
        }
    cout<<total;
    stop
}
