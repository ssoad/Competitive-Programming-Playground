#include <iostream>
#define soads_game int main()
#define at(a,j) ((a>>j)&1)
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaarrn Soad
    University of Asia Pacific (UAP),BD

*/
soads_game
{
    string a;
    cin>>a;
    int pos=a.length()-1;
    int res=a[pos]-'0';
    cout<<"RES:"<<res<<endl;
    cout<<res%2<<endl;
    stop
}






