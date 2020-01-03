#include <iostream>
#define soads_game int main()
#define stop return 0;
using namespace std;
int main(){
int n,h,co=0,num;
cin>>n>>h;
while(n--)
{
    cin>>num;
    if(num>h)
    {
        co+=2;
    }
    else
    {
        co+=1;
    }
}
cout<<co<<endl;
stop
}

