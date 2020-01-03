#include<iostream>
using namespace std;
#define soads_game int main()
#define stop return 0;

soads_game
{
    int a,b,co=0;
    cin>>a>>b;
    while(a<=b)
    {
        a *= 3;
        b *= 2;
        co++;
    }
    cout<<co<<endl;
    stop
}
