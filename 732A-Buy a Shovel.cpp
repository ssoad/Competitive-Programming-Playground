#include"iostream"
#include"bits/stdc++.h"
using namespace std;
#define start int main()
#define stop return 0

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

start
{
    int a,b,c,i;
    cin >> a >> b;
    for(i=1;i<10;i++)
    {
        c=a*i%10;
        cout<<"Value(i):"<<i<<" "<<"Value Change: "<<c<<endl;
        if(c==0||c==b)
        {
            break;
        }
    }
    cout<<i<<endl;
    stop;

}


