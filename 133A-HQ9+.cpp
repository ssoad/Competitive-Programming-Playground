#include<iostream>
using namespace std;
#define soads_game int main()


soads_game
{
    string a;
    bool f=false;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if((a.at(i)=='H')||(a.at(i)=='Q')||(a.at(i)=='9')||(a.at(i)=='+'))
            f=true;
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

