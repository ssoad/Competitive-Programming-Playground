

#include<iostream>
using namespace std;
#define soads_game int main()
#define stop return 0;

soads_game
{
    int a(0),b(0),c(0),t(0);
    cin >> a >> b >> c;

    if(a==1&&c==1)
        t = a + b + c;
    else if(a==1)
        t=(a+b)*c;
    else if(b==1)
        if(a>c)t=a*(b+c);
        else t=(a+b)*c;
    else if(c==1)t=a*(b+c);
    else t=a*b*c;
    cout<<t<< endl;
    stop
}




