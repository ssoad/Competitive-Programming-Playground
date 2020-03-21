#include<iostream>
using namespace std;
#define soads_game int main()


soads_game
{
    int cou=0,a,d,n;
    cin>>n;
    while(n--)
    {
        cin>>a>>d;
        if(a+2<=d)
        {
            cou++;
        }
    }

    cout<<cou<<endl;
    return 0;
}
