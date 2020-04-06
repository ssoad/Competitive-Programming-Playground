#include <iostream>
#define soads_game int main()
#define stop return 0;
using namespace std;

/*
    Author- Sohanuzzaarrn Soad
    University of Asia Pacific (UAP),BD

*/
soads_game
{
    int n,m=1;
    cin>>n;
    int i=n%2?3:2;
    for(i;i<=n;i+=2)
    {
        cout<<"Loop:"<<m++<<endl;
        if(n%i==0)
        {
            cout<<i<<n/i<<endl;
            break;
        }
    }
    stop
}




