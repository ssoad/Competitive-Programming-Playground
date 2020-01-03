#include<iostream>
using namespace std;
#define soads_game int main()
#define stop return 0;


soads_game
{
    int n,d=0,a=0;
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c;
        if(c=='A')
            a++;
        else
            d++;
    }
     if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    stop
}
